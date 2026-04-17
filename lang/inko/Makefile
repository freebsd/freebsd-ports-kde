PORTNAME=	inko
DISTVERSIONPREFIX=	v
DISTVERSION=	0.19.1
CATEGORIES=	lang devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Language for building concurrent software
WWW=		https://inko-lang.org/ \
		https://github.com/inko-lang/inko

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

NOT_FOR_ARCHS=	armv6 armv7 i386 mips powerpc # build fails on non-64-bit architectures: Inko requires a 64-bits architecture

LIB_DEPENDS=	libffi.so:devel/libffi \
		libzstd.so:archivers/zstd

USES=		cargo llvm:18,lib localbase:ldflags

USE_GITHUB=	yes
GH_ACCOUNT=	inko-lang

MAKE_ENV=	LLVM_SYS_181_PREFIX=${LLVM_PREFIX} \
		INKO_RT=${PREFIX}/lib/inko/runtime \
		INKO_STD=${PREFIX}/lib/inko

CARGO_CRATES=	addr2line-0.24.2 \
		adler2-2.0.1 \
		anyhow-1.0.99 \
		arrayref-0.3.9 \
		arrayvec-0.7.6 \
		atomic-wait-1.1.0 \
		backtrace-0.3.75 \
		base64-0.22.1 \
		bitflags-2.9.3 \
		blake3-1.8.2 \
		bstr-1.12.0 \
		bytes-1.10.1 \
		cc-1.2.34 \
		cfg-if-1.0.3 \
		console-0.15.11 \
		constant_time_eq-0.3.1 \
		core-foundation-0.10.1 \
		core-foundation-sys-0.8.7 \
		crc32fast-1.5.0 \
		crossbeam-utils-0.8.21 \
		either-1.15.0 \
		encode_unicode-1.0.0 \
		equivalent-1.0.2 \
		errno-0.3.13 \
		filetime-0.2.26 \
		flate2-1.1.2 \
		fnv-1.0.7 \
		getopts-0.2.23 \
		getrandom-0.2.16 \
		getrandom-0.3.3 \
		gimli-0.31.1 \
		graviola-0.2.1 \
		hashbrown-0.15.5 \
		http-1.3.1 \
		httparse-1.10.1 \
		indexmap-2.11.0 \
		itoa-1.0.15 \
		lazy_static-1.5.0 \
		libc-0.2.175 \
		libredox-0.1.9 \
		linux-raw-sys-0.4.15 \
		llvm-sys-181.2.0 \
		log-0.4.27 \
		memchr-2.7.5 \
		miniz_oxide-0.8.9 \
		object-0.36.7 \
		once_cell-1.21.3 \
		openssl-probe-0.1.6 \
		percent-encoding-2.3.2 \
		proc-macro2-1.0.101 \
		quote-1.0.40 \
		r-efi-5.3.0 \
		redox_syscall-0.5.17 \
		regex-automata-0.4.10 \
		regex-lite-0.1.7 \
		ring-0.17.14 \
		rustc-demangle-0.1.26 \
		rustix-0.38.44 \
		rustls-0.23.31 \
		rustls-graviola-0.2.1 \
		rustls-native-certs-0.8.1 \
		rustls-pemfile-2.2.0 \
		rustls-pki-types-1.12.0 \
		rustls-webpki-0.103.4 \
		schannel-0.1.27 \
		security-framework-3.3.0 \
		security-framework-sys-2.14.0 \
		semver-1.0.26 \
		serde-1.0.219 \
		serde_derive-1.0.219 \
		shlex-1.3.0 \
		similar-2.7.0 \
		similar-asserts-1.7.0 \
		subtle-2.6.1 \
		syn-2.0.106 \
		tar-0.4.44 \
		thiserror-1.0.69 \
		thiserror-impl-1.0.69 \
		unicode-ident-1.0.18 \
		unicode-segmentation-1.12.0 \
		unicode-width-0.2.1 \
		untrusted-0.9.0 \
		ureq-3.1.0 \
		ureq-proto-0.5.0 \
		utf-8-0.7.6 \
		wasi-0.11.1+wasi-snapshot-preview1 \
		wasi-0.14.2+wasi-0.2.4 \
		webpki-roots-1.0.2 \
		windows-link-0.1.3 \
		windows-sys-0.42.0 \
		windows-sys-0.52.0 \
		windows-sys-0.59.0 \
		windows-sys-0.60.2 \
		windows-targets-0.52.6 \
		windows-targets-0.53.3 \
		windows_aarch64_gnullvm-0.42.2 \
		windows_aarch64_gnullvm-0.52.6 \
		windows_aarch64_gnullvm-0.53.0 \
		windows_aarch64_msvc-0.42.2 \
		windows_aarch64_msvc-0.52.6 \
		windows_aarch64_msvc-0.53.0 \
		windows_i686_gnu-0.42.2 \
		windows_i686_gnu-0.52.6 \
		windows_i686_gnu-0.53.0 \
		windows_i686_gnullvm-0.52.6 \
		windows_i686_gnullvm-0.53.0 \
		windows_i686_msvc-0.42.2 \
		windows_i686_msvc-0.52.6 \
		windows_i686_msvc-0.53.0 \
		windows_x86_64_gnu-0.42.2 \
		windows_x86_64_gnu-0.52.6 \
		windows_x86_64_gnu-0.53.0 \
		windows_x86_64_gnullvm-0.42.2 \
		windows_x86_64_gnullvm-0.52.6 \
		windows_x86_64_gnullvm-0.53.0 \
		windows_x86_64_msvc-0.42.2 \
		windows_x86_64_msvc-0.52.6 \
		windows_x86_64_msvc-0.53.0 \
		wit-bindgen-rt-0.39.0 \
		zeroize-1.8.1 \
		inkwell,inkwell_internals@git+https://github.com/TheDan64/inkwell.git?rev=caabaa5a8e05c52c531f9a0df784ac5651434803\#caabaa5a8e05c52c531f9a0df784ac5651434803

do-install:
	# executable
	${INSTALL_PROGRAM} ${WRKDIR}/target/release/inko ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	# runtime library
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/inko/runtime
	${INSTALL_DATA} ${WRKDIR}/target/release/libinko.a ${STAGEDIR}${PREFIX}/lib/inko/runtime
	# standard library
	cd ${WRKSRC}/std/src && ${COPYTREE_SHARE} std ${STAGEDIR}${PREFIX}/lib/inko

# tests as of 0.19.1: test result: ok. 207 passed; 0 failed; 0 ignored; 0 measured; 0 filtered out; finished in 0.00s

.include <bsd.port.mk>
