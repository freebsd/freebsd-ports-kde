#!/usr/bin/env ruby
# frozen_string_literal: true

require 'open3'

class Make
  attr_reader :directory

  def initialize(directory)
    @directory = directory
  end

  def list_variable(variable)
    result = run_make("-V#{variable}")
    return result[:stdout].map(&:split).flatten if result[:success]

    nil
  end

  private

  def run_make(target = nil)
    stdout, stderr, status = Open3.capture3("make -C#{directory} #{target}")
    f = ->(lines) { lines.split("\n").map(&:chomp) }
    { success: status.success?, stdout: f[stdout], stderr: f[stderr] }
  end
end

class Cleaner
  attr_reader :path

  def initialize(path)
    @path = path
  end

  def subdirs
    @subdirs ||= Make.new(path).list_variable('SUBDIR')
  end
end

class CategoryCleaner < Cleaner
  def run!
    missing = Set.new(subdirs.filter { |port| !File.exist?(File.join(path, port)) })

    return if missing.none?

    puts "Cleaning #{missing.count} ports from category #{path}"

    makefile = File.join(path, 'Makefile')
    lines = File.readlines(makefile)
    File.open(makefile, 'w') do |file|
      lines.each do |line|
        skip = false
        missing.each do |to_delete|
          next unless line.match?(/^\s+SUBDIR \+= #{to_delete}$/)

          missing.delete(to_delete)
          puts "\t* #{to_delete}"
          skip = true
          break
        end

        file.puts(line) unless skip
      end
    end
  end
end

class TreeCleaner < Cleaner
  def run!
    subdirs.each do |category|
      CategoryCleaner.new(File.join(path, category)).run!
    end
  end
end

if ARGV.none?
  puts 'Missing argument, expected path to ports tree to clean'
  exit 1
end

tree = ARGV.first
unless File.directory?(tree)
  puts "Tree #{tree} does not seem to exist"
  exit 1
end

cleaner = TreeCleaner.new(tree)
cleaner.run!
