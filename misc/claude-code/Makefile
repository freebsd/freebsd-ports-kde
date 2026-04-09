PORTNAME=	claude-code
DISTVERSION=	2.1.96
CATEGORIES=	misc # machine-learning
DISTFILES=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Agentic coding tool from Anthropic that lives in your terminal
WWW=		https://github.com/anthropics/claude-code

FETCH_DEPENDS=	cargo:lang/rust \
		curl:ftp/curl \
		jq:textproc/jq \
		npm:www/npm \
		${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss
RUN_DEPENDS=	rg:textproc/ripgrep

USES=		nodejs:run

JS_ARCH=	${ARCH:S/amd64/x64/:S/aarch64/arm64/:S/i386/ia32/:S/powerpc64le/ppc64le/:S/powerpc64/ppc64/:C/armv[67]/arm/} # modeled after electron.mk
PLIST_SUB=	JS_ARCH=${JS_ARCH}

OPTIONS_DEFINE=		AUDIO_CAPTURE
OPTIONS_DEFAULT=	AUDIO_CAPTURE
OPTIONS_SUB=		yes

AUDIO_CAPTURE_DESC=		Build native audio capture module for FreeBSD
AUDIO_CAPTURE_BUILD_DEPENDS=	${LOCALBASE}/bin/cargo:lang/rust \
				pkgconf:devel/pkgconf
AUDIO_CAPTURE_LIB_DEPENDS=	libasound.so:audio/alsa-lib

AUDIO_CAPTURE_COMMIT=		bb370f75235254da2c3d34f6168fc4a9902d9090

PACKAGE_NAME=	@anthropic-ai/claude-code

FETCH_SCRIPT=		${PORTSDIR}/Tools/scripts/npmjs-fetch-with-dependencies.sh
AUDIO_CAPTURE_FETCH_SCRIPT=	${FILESDIR}/audio-capture-fetch.sh

CLI_JS=			${WRKSRC}/node_modules/${PACKAGE_NAME}/cli.js
AUDIO_CAPTURE_WRKSRC=	${WRKDIR}/audio-capture-${AUDIO_CAPTURE_COMMIT}

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MAUDIO_CAPTURE}
DISTFILES+=	audio-capture-${AUDIO_CAPTURE_COMMIT}${EXTRACT_SUFX}:audio_capture_src
.else
NO_BUILD=	yes
NO_ARCH=	yes
.endif

do-fetch:
	@if ! [ -f ${DISTDIR}/${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX} ]; then \
		${SETENV} TMPDIR=${WRKDIR} LOCALBASE=${LOCALBASE} ${FETCH_SCRIPT} \
			${PACKAGE_NAME} ${DISTVERSION} \
			${FILESDIR}/package-lock.json \
			${DISTDIR}/${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}; \
	fi

do-fetch-AUDIO_CAPTURE-on:
	@if ! [ -f ${DISTDIR}/audio-capture-${AUDIO_CAPTURE_COMMIT}${EXTRACT_SUFX} ]; then \
		${SETENV} TMPDIR=${WRKDIR} LOCALBASE=${LOCALBASE} \
			${SH} ${AUDIO_CAPTURE_FETCH_SCRIPT} \
			${AUDIO_CAPTURE_COMMIT} \
			${DISTDIR}/audio-capture-${AUDIO_CAPTURE_COMMIT}${EXTRACT_SUFX}; \
	fi

# Raise API and MCP transport timeouts to 24 hours for slow (e.g. CPU-based) servers
post-extract:
	${REINPLACE_CMD} -i '' \
		-e 's/var EP5=60000;/var EP5=86400000;/' \
		-e 's/API_TIMEOUT_MS||String(600000)/API_TIMEOUT_MS||String(86400000)/' \
		-e 's/DEFAULT_TIMEOUT=600000;/DEFAULT_TIMEOUT=86400000;/' \
		${CLI_JS}

post-extract-AUDIO_CAPTURE-on:
	# patch cli.js to load audio-capture on FreeBSD
	${REINPLACE_CMD} -i '' \
		-e 's|q!=="darwin"&&q!=="linux"&&q!=="win32"|q!=="darwin"\&\&q!=="linux"\&\&q!=="win32"\&\&q!=="freebsd"|' \
		${CLI_JS}

do-build:
.if ${PORT_OPTIONS:MAUDIO_CAPTURE}
	@${ECHO_MSG} "====> Building audio-capture for FreeBSD amd64..."
	@cd ${AUDIO_CAPTURE_WRKSRC} && \
		${SETENV} HOME=${WRKDIR} cargo build --release
.endif

do-install:
	# install node_modules
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib
	@cd ${WRKSRC} && \
		${COPYTREE_SHARE} node_modules ${STAGEDIR}${PREFIX}/lib
	# remove *.node binaries for non-FreeBSD platforms
	@${FIND} ${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/vendor/audio-capture \
		-name "*.node" -delete
.if ${PORT_OPTIONS:MAUDIO_CAPTURE}
	# install FreeBSD amd64 audio-capture module
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/vendor/audio-capture/x64-freebsd
	${INSTALL_LIB} ${AUDIO_CAPTURE_WRKSRC}/target/release/libaudio_capture.so \
		${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/vendor/audio-capture/x64-freebsd/audio-capture.node
.endif
	# remove Linux-only seccomp binaries (seccomp is a Linux kernel API, guarded by process.platform==="linux" in cli.js)
	@${RM} -r ${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/vendor/seccomp
	# remove bundled ripgrep
	@${RM} -r ${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/vendor/ripgrep
	# remove empty vendor subdirectories (and vendor/ itself when AUDIO_CAPTURE=OFF)
	@${FIND} ${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/vendor \
		-depth -type d -empty -delete
	# update shebang
	${REINPLACE_CMD} -i '' \
		-e "s|#!/usr/bin/env node|#!${PREFIX}/bin/node|" \
		${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/cli.js
	# set exec bit
	@${CHMOD} +x ${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/cli.js
	# create wrapper script that uses system ripgrep
	@${MKDIR} ${STAGEDIR}${PREFIX}/bin
	@${ECHO_CMD} '#!/bin/sh' > ${STAGEDIR}${PREFIX}/bin/claude
	@${ECHO_CMD} 'export USE_BUILTIN_RIPGREP=false' >> ${STAGEDIR}${PREFIX}/bin/claude
	@${ECHO_CMD} 'exec ${PREFIX}/lib/node_modules/${PACKAGE_NAME}/cli.js "$$@"' >> ${STAGEDIR}${PREFIX}/bin/claude
	@${CHMOD} +x ${STAGEDIR}${PREFIX}/bin/claude

.include <bsd.port.mk>
