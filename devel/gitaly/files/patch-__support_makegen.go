--- _support/makegen.go.orig	2019-08-22 16:24:24 UTC
+++ _support/makegen.go
@@ -320,7 +320,7 @@ var templateText = `
 # These variables may be overridden at runtime by top-level make
 PREFIX ?= /usr/local
 INSTALL_DEST_DIR := $(DESTDIR)$(PREFIX)/bin/
-BUNDLE_FLAGS ?= --deployment
+BUNDLE_FLAGS ?= --local
 ASSEMBLY_ROOT ?= {{ .BuildDir }}/assembly
 BUILD_TAGS := tracer_static tracer_static_jaeger
 
@@ -368,8 +368,8 @@ build: ../.ruby-bundle
 # step. Both Omnibus and CNG assume it is in the Gitaly root, not in
 # _build. Hence the '../' in front.
 ../.ruby-bundle:  {{ .GitalyRubyDir }}/Gemfile.lock  {{ .GitalyRubyDir }}/Gemfile
+	cd  {{ .GitalyRubyDir }} && rm Gemfile.lock && bundle install $(BUNDLE_FLAGS)
 	cd  {{ .GitalyRubyDir }} && bundle config # for debugging
-	cd  {{ .GitalyRubyDir }} && bundle install $(BUNDLE_FLAGS)
 	touch $@
 
 .PHONY: install
