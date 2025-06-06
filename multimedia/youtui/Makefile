PORTNAME=	youtui
DISTVERSIONPREFIX=	youtui/v
DISTVERSION=	0.0.21
PORTREVISION=	2
CATEGORIES=	multimedia

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	TUI and API for YouTube music
WWW=		https://github.com/nick42d/youtui

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libasound.so:audio/alsa-lib

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	nick42d

RUSTFLAGS=	${ARCH:S/i386/YES/:C/^[a-z].*//:S/YES/-C target-feature=+sse,+sse2/} # add sse sse2 target-features only on i386

CARGO_CRATES=	addr2line-0.24.2 \
		adler2-2.0.0 \
		aes-0.8.4 \
		ahash-0.8.11 \
		aho-corasick-1.1.3 \
		allocator-api2-0.2.21 \
		alsa-0.9.1 \
		alsa-sys-0.3.1 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		anstream-0.6.18 \
		anstyle-1.0.10 \
		anstyle-parse-0.2.6 \
		anstyle-query-1.1.2 \
		anstyle-wincon-3.0.7 \
		anyhow-1.0.95 \
		arrayvec-0.7.6 \
		async-compression-0.4.18 \
		async-trait-0.1.86 \
		async_cell-0.2.2 \
		atomic-waker-1.1.2 \
		autocfg-1.4.0 \
		backtrace-0.3.74 \
		base64-0.22.1 \
		bindgen-0.70.1 \
		bitflags-1.3.2 \
		bitflags-2.8.0 \
		block-buffer-0.10.4 \
		block-padding-0.3.3 \
		boa_ast-0.20.0 \
		boa_engine-0.20.0 \
		boa_gc-0.20.0 \
		boa_interner-0.20.0 \
		boa_macros-0.20.0 \
		boa_parser-0.20.0 \
		boa_profiler-0.20.0 \
		boa_string-0.20.0 \
		bumpalo-3.17.0 \
		bytemuck-1.21.0 \
		bytemuck_derive-1.8.1 \
		byteorder-1.5.0 \
		bytes-1.10.0 \
		cassowary-0.3.0 \
		castaway-0.2.3 \
		cbc-0.1.2 \
		cc-1.2.12 \
		cesu8-1.1.0 \
		cexpr-0.6.0 \
		cfg-if-1.0.0 \
		cfg_aliases-0.2.1 \
		chrono-0.4.39 \
		cipher-0.4.4 \
		clang-sys-1.8.1 \
		clap-4.5.28 \
		clap_builder-4.5.27 \
		clap_derive-4.5.28 \
		clap_lex-0.7.4 \
		claxon-0.4.3 \
		colorchoice-1.0.3 \
		combine-4.6.7 \
		compact_str-0.8.1 \
		const_format-0.2.34 \
		const_format_proc_macros-0.2.34 \
		cookie-0.18.1 \
		cookie_store-0.21.1 \
		core-foundation-0.9.4 \
		core-foundation-sys-0.8.7 \
		coreaudio-rs-0.11.3 \
		coreaudio-sys-0.2.16 \
		cpal-0.15.3 \
		cpufeatures-0.2.17 \
		crc32fast-1.4.2 \
		crossbeam-utils-0.8.21 \
		crossterm-0.28.1 \
		crossterm_winapi-0.9.1 \
		crypto-common-0.1.6 \
		cssparser-0.31.2 \
		cssparser-macros-0.6.1 \
		darling-0.20.10 \
		darling_core-0.20.10 \
		darling_macro-0.20.10 \
		dashmap-6.1.0 \
		dasp_sample-0.11.0 \
		deranged-0.3.11 \
		derivative-2.2.0 \
		derive_more-0.99.19 \
		derive_more-1.0.0 \
		derive_more-impl-1.0.0 \
		diff-0.1.13 \
		digest-0.10.7 \
		directories-6.0.0 \
		dirs-sys-0.5.0 \
		displaydoc-0.2.5 \
		document-features-0.2.10 \
		dtoa-1.0.9 \
		dtoa-short-0.3.5 \
		dyn-clone-1.0.18 \
		ego-tree-0.6.3 \
		either-1.13.0 \
		encoding_rs-0.8.35 \
		equivalent-1.0.1 \
		errno-0.3.10 \
		extended-0.1.0 \
		fast-float2-0.2.3 \
		fastrand-2.3.0 \
		filedescriptor-0.8.2 \
		flate2-1.0.35 \
		fnv-1.0.7 \
		foldhash-0.1.4 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		format_num_pattern-0.9.3 \
		futf-0.1.5 \
		futures-0.3.31 \
		futures-channel-0.3.31 \
		futures-core-0.3.31 \
		futures-executor-0.3.31 \
		futures-io-0.3.31 \
		futures-macro-0.3.31 \
		futures-sink-0.3.31 \
		futures-task-0.3.31 \
		futures-util-0.3.31 \
		fxhash-0.2.1 \
		gag-1.0.0 \
		generic-array-0.14.7 \
		getopts-0.2.21 \
		getrandom-0.2.15 \
		getrandom-0.3.1 \
		gimli-0.31.1 \
		glob-0.3.2 \
		h2-0.4.7 \
		hashbrown-0.14.5 \
		hashbrown-0.15.2 \
		heck-0.5.0 \
		hex-0.4.3 \
		hound-3.5.1 \
		html5ever-0.27.0 \
		http-1.2.0 \
		http-body-1.0.1 \
		http-body-util-0.1.2 \
		httparse-1.10.0 \
		hyper-1.6.0 \
		hyper-rustls-0.27.5 \
		hyper-tls-0.6.0 \
		hyper-util-0.1.10 \
		iana-time-zone-0.1.61 \
		iana-time-zone-haiku-0.1.2 \
		icu_collections-1.5.0 \
		icu_locid-1.5.0 \
		icu_locid_transform-1.5.0 \
		icu_locid_transform_data-1.5.0 \
		icu_normalizer-1.5.0 \
		icu_normalizer_data-1.5.0 \
		icu_properties-1.5.1 \
		icu_properties_data-1.5.0 \
		icu_provider-1.5.0 \
		icu_provider_macros-1.5.0 \
		ident_case-1.0.1 \
		idna-1.0.3 \
		idna_adapter-1.2.0 \
		indexmap-2.7.1 \
		indoc-2.0.5 \
		inout-0.1.3 \
		instability-0.3.7 \
		instant-0.1.13 \
		intrusive-collections-0.9.7 \
		ipnet-2.11.0 \
		is_terminal_polyfill-1.70.1 \
		iset-0.3.1 \
		itertools-0.13.0 \
		itertools-0.14.0 \
		itoa-1.0.14 \
		jni-0.21.1 \
		jni-sys-0.3.0 \
		jobserver-0.1.32 \
		js-sys-0.3.77 \
		lazy_static-1.5.0 \
		lewton-0.10.2 \
		libc-0.2.169 \
		libloading-0.8.6 \
		libredox-0.1.3 \
		linux-raw-sys-0.4.15 \
		litemap-0.7.4 \
		litrs-0.4.1 \
		lock_api-0.4.12 \
		log-0.4.25 \
		lru-0.12.5 \
		m3u8-rs-6.0.0 \
		mac-0.1.1 \
		mach2-0.4.2 \
		markup5ever-0.12.1 \
		memchr-2.7.4 \
		memoffset-0.9.1 \
		mime-0.3.17 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.8.3 \
		mio-1.0.3 \
		native-tls-0.2.13 \
		ndk-0.8.0 \
		ndk-context-0.1.1 \
		ndk-sys-0.5.0+25.2.9519653 \
		new_debug_unreachable-1.0.6 \
		nom-7.1.3 \
		nu-ansi-term-0.46.0 \
		num-bigint-0.4.6 \
		num-conv-0.1.0 \
		num-derive-0.4.2 \
		num-integer-0.1.46 \
		num-traits-0.2.19 \
		num_enum-0.7.3 \
		num_enum_derive-0.7.3 \
		num_threads-0.1.7 \
		object-0.36.7 \
		oboe-0.6.1 \
		oboe-sys-0.6.1 \
		ogg-0.8.0 \
		once_cell-1.20.2 \
		openssl-0.10.70 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.6 \
		openssl-sys-0.9.105 \
		option-ext-0.2.0 \
		overload-0.1.1 \
		parking_lot-0.11.2 \
		parking_lot-0.12.3 \
		parking_lot_core-0.8.6 \
		parking_lot_core-0.9.10 \
		paste-1.0.15 \
		percent-encoding-2.3.1 \
		phf-0.10.1 \
		phf-0.11.3 \
		phf_codegen-0.10.0 \
		phf_codegen-0.11.3 \
		phf_generator-0.10.0 \
		phf_generator-0.11.3 \
		phf_macros-0.11.3 \
		phf_shared-0.10.0 \
		phf_shared-0.11.3 \
		pin-project-lite-0.2.16 \
		pin-utils-0.1.0 \
		pkg-config-0.3.31 \
		pollster-0.4.0 \
		portable-atomic-1.10.0 \
		powerfmt-0.2.0 \
		ppv-lite86-0.2.20 \
		precomputed-hash-0.1.1 \
		pretty_assertions-1.4.1 \
		proc-macro-crate-3.2.0 \
		proc-macro2-1.0.93 \
		psl-types-2.0.11 \
		publicsuffix-2.3.0 \
		pure-rust-locales-0.8.1 \
		quinn-0.11.6 \
		quinn-proto-0.11.9 \
		quinn-udp-0.5.9 \
		quote-1.0.38 \
		rand-0.8.5 \
		rand-0.9.0 \
		rand_chacha-0.3.1 \
		rand_chacha-0.9.0 \
		rand_core-0.6.4 \
		rand_core-0.9.0 \
		rat-cursor-1.2.0 \
		rat-event-1.2.3 \
		rat-focus-1.0.0 \
		rat-reloc-1.1.2 \
		rat-scrolled-1.1.1 \
		rat-text-1.0.3 \
		ratatui-0.29.0 \
		redox_syscall-0.2.16 \
		redox_syscall-0.5.8 \
		redox_users-0.5.0 \
		regex-1.11.1 \
		regex-automata-0.4.9 \
		regex-syntax-0.8.5 \
		regress-0.10.3 \
		reqwest-0.12.12 \
		reqwest-middleware-0.3.3 \
		reqwest-retry-0.6.1 \
		retry-policies-0.4.0 \
		ring-0.17.8 \
		rodio-0.20.1 \
		ropey-1.6.1 \
		rustc-demangle-0.1.24 \
		rustc-hash-1.1.0 \
		rustc-hash-2.1.0 \
		rustix-0.38.44 \
		rustls-0.23.22 \
		rustls-pemfile-2.2.0 \
		rustls-pki-types-1.11.0 \
		rustls-webpki-0.102.8 \
		rustversion-1.0.19 \
		ryu-1.0.19 \
		ryu-js-1.0.1 \
		same-file-1.0.6 \
		schannel-0.1.27 \
		scopeguard-1.2.0 \
		scraper-0.20.0 \
		security-framework-2.11.1 \
		security-framework-sys-2.14.0 \
		selectors-0.25.0 \
		serde-1.0.217 \
		serde_derive-1.0.217 \
		serde_json-1.0.138 \
		serde_qs-0.13.0 \
		serde_spanned-0.6.8 \
		serde_urlencoded-0.7.1 \
		servo_arc-0.3.0 \
		sha1-0.10.6 \
		sharded-slab-0.1.7 \
		shlex-1.3.0 \
		signal-hook-0.3.17 \
		signal-hook-mio-0.2.4 \
		signal-hook-registry-1.4.2 \
		siphasher-0.3.11 \
		siphasher-1.0.1 \
		slab-0.4.9 \
		smallvec-1.13.2 \
		socket2-0.5.8 \
		spin-0.9.8 \
		sptr-0.3.2 \
		stable_deref_trait-1.2.0 \
		static_assertions-1.1.0 \
		str_indices-0.4.4 \
		string_cache-0.8.8 \
		string_cache_codegen-0.5.3 \
		strsim-0.11.1 \
		strum-0.26.3 \
		strum_macros-0.26.4 \
		subtle-2.6.1 \
		symphonia-0.5.4 \
		symphonia-bundle-flac-0.5.4 \
		symphonia-bundle-mp3-0.5.4 \
		symphonia-codec-aac-0.5.4 \
		symphonia-codec-adpcm-0.5.4 \
		symphonia-codec-pcm-0.5.4 \
		symphonia-codec-vorbis-0.5.4 \
		symphonia-core-0.5.4 \
		symphonia-format-isomp4-0.5.4 \
		symphonia-format-riff-0.5.4 \
		symphonia-metadata-0.5.4 \
		symphonia-utils-xiph-0.5.4 \
		syn-1.0.109 \
		syn-2.0.98 \
		sync_wrapper-1.0.2 \
		synstructure-0.13.1 \
		system-configuration-0.6.1 \
		system-configuration-sys-0.6.0 \
		tap-1.0.1 \
		tempfile-3.16.0 \
		tendril-0.4.3 \
		thin-vec-0.2.13 \
		thiserror-1.0.69 \
		thiserror-2.0.11 \
		thiserror-impl-1.0.69 \
		thiserror-impl-2.0.11 \
		thread_local-1.1.8 \
		time-0.3.37 \
		time-core-0.1.2 \
		time-macros-0.2.19 \
		tinystr-0.7.6 \
		tinyvec-1.8.1 \
		tinyvec_macros-0.1.1 \
		tokio-1.43.0 \
		tokio-macros-2.5.0 \
		tokio-native-tls-0.3.1 \
		tokio-rustls-0.26.1 \
		tokio-stream-0.1.17 \
		tokio-util-0.7.13 \
		toml-0.8.19 \
		toml_datetime-0.6.8 \
		toml_edit-0.22.23 \
		tower-0.5.2 \
		tower-layer-0.3.3 \
		tower-service-0.3.3 \
		tracing-0.1.41 \
		tracing-attributes-0.1.28 \
		tracing-core-0.1.33 \
		tracing-log-0.2.0 \
		tracing-subscriber-0.3.19 \
		try-lock-0.2.5 \
		tui-logger-0.14.4 \
		typenum-1.17.0 \
		unicode-display-width-0.3.0 \
		unicode-ident-1.0.16 \
		unicode-segmentation-1.12.0 \
		unicode-truncate-1.1.0 \
		unicode-width-0.1.14 \
		unicode-width-0.2.0 \
		unicode-xid-0.2.6 \
		untrusted-0.9.0 \
		url-2.5.4 \
		urlencoding-2.1.3 \
		utf-8-0.7.6 \
		utf16_iter-1.0.5 \
		utf8_iter-1.0.4 \
		utf8parse-0.2.2 \
		valuable-0.1.1 \
		vcpkg-0.2.15 \
		version_check-0.9.5 \
		walkdir-2.5.0 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasi-0.13.3+wasi-0.2.2 \
		wasm-bindgen-0.2.100 \
		wasm-bindgen-backend-0.2.100 \
		wasm-bindgen-futures-0.4.50 \
		wasm-bindgen-macro-0.2.100 \
		wasm-bindgen-macro-support-0.2.100 \
		wasm-bindgen-shared-0.2.100 \
		wasm-timer-0.2.5 \
		web-sys-0.3.77 \
		web-time-1.1.0 \
		webpki-roots-0.26.8 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.9 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.54.0 \
		windows-core-0.52.0 \
		windows-core-0.54.0 \
		windows-registry-0.2.0 \
		windows-result-0.1.2 \
		windows-result-0.2.0 \
		windows-strings-0.1.0 \
		windows-sys-0.45.0 \
		windows-sys-0.52.0 \
		windows-sys-0.59.0 \
		windows-targets-0.42.2 \
		windows-targets-0.52.6 \
		windows_aarch64_gnullvm-0.42.2 \
		windows_aarch64_gnullvm-0.52.6 \
		windows_aarch64_msvc-0.42.2 \
		windows_aarch64_msvc-0.52.6 \
		windows_i686_gnu-0.42.2 \
		windows_i686_gnu-0.52.6 \
		windows_i686_gnullvm-0.52.6 \
		windows_i686_msvc-0.42.2 \
		windows_i686_msvc-0.52.6 \
		windows_x86_64_gnu-0.42.2 \
		windows_x86_64_gnu-0.52.6 \
		windows_x86_64_gnullvm-0.42.2 \
		windows_x86_64_gnullvm-0.52.6 \
		windows_x86_64_msvc-0.42.2 \
		windows_x86_64_msvc-0.52.6 \
		winnow-0.7.1 \
		wit-bindgen-rt-0.33.0 \
		write16-1.0.0 \
		writeable-0.5.5 \
		yansi-1.0.1 \
		yoke-0.7.5 \
		yoke-derive-0.7.5 \
		youtui-vendored-rusty_ytdl-0.7.4-youtui-vendored.2 \
		zerocopy-0.7.35 \
		zerocopy-0.8.16 \
		zerocopy-derive-0.7.35 \
		zerocopy-derive-0.8.16 \
		zerofrom-0.1.5 \
		zerofrom-derive-0.1.5 \
		zeroize-1.8.1 \
		zerovec-0.10.4 \
		zerovec-derive-0.10.3

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

PLIST_FILES=	bin/${PORTNAME}

do-install:
	# binaries (workaround for error: found a virtual manifest at `xx` instead of a package manifest)
	echo ">> find"
	find ${WRKDIR}/target
	echo "<< find"
	${INSTALL_PROGRAM} \
		${WRKDIR}/target/release/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
