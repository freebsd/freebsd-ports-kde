PORTNAME=	openclaw
DISTVERSION=	2026.4.14
CATEGORIES=	misc # machine-learning
PKGNAMESUFFIX=	-ai-gateway
DISTFILES=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Multi-channel AI gateway with extensible messaging integrations
WWW=		https://github.com/openclaw/openclaw

LICENSE=	MIT

FETCH_DEPENDS=	curl:ftp/curl \
		jq:textproc/jq \
		npm:www/npm \
		${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss
BUILD_DEPENDS=	npm:www/npm \
		vips>=8.17.2:graphics/vips
RUN_DEPENDS=	vips>=8.17.2:graphics/vips

USES=		nodejs:run pkgconfig python:build

PACKAGE_NAME=	openclaw

NODE_ARCH=	${ARCH:S/amd64/x64/:S/aarch64/arm64/:S/i386/ia32/:S/powerpc64le/ppc64le/:S/powerpc64/ppc64/:C/armv[67]/arm/} # modeled after electron.mk
PLIST_SUB=	NODE_ARCH=${NODE_ARCH}

FETCH_SCRIPT=	${PORTSDIR}/Tools/scripts/npmjs-fetch-with-dependencies.sh

dep_sharp_npm_name=		sharp
dep_sharp_version=		0.34.5
dep_node_addon_api_npm_name=	node-addon-api
dep_node_addon_api_version=	8.5.0

DISTFILES+=	sharp-${dep_sharp_version}${EXTRACT_SUFX} \
		node-addon-api-${dep_node_addon_api_version}${EXTRACT_SUFX}

DD=	${DISTDIR}/${DIST_SUBDIR}

do-fetch:
	@${MKDIR} ${DD}
	@if ! [ -f ${DD}/${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX} ]; then \
		${SETENV} TMPDIR=${WRKDIR} LOCALBASE=${LOCALBASE} npm_config_force=true ${FETCH_SCRIPT} \
			${PACKAGE_NAME} ${DISTVERSION} \
			${FILESDIR}/package-lock.json \
			${DD}/${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}; \
	fi
	@if ! [ -f ${DD}/sharp-${dep_sharp_version}${EXTRACT_SUFX} ]; then \
		${SETENV} TMPDIR=${WRKDIR} LOCALBASE=${LOCALBASE} ${FETCH_SCRIPT} \
			${dep_sharp_npm_name} ${dep_sharp_version} \
			${FILESDIR}/package-lock-sharp.json \
			${DD}/sharp-${dep_sharp_version}${EXTRACT_SUFX}; \
	fi
	@if ! [ -f ${DD}/node-addon-api-${dep_node_addon_api_version}${EXTRACT_SUFX} ]; then \
		${SETENV} TMPDIR=${WRKDIR} LOCALBASE=${LOCALBASE} ${FETCH_SCRIPT} \
			${dep_node_addon_api_npm_name} ${dep_node_addon_api_version} \
			${FILESDIR}/package-lock-node-addon-api.json \
			${DD}/node-addon-api-${dep_node_addon_api_version}${EXTRACT_SUFX}; \
	fi

post-extract:
	# Move node-addon-api into sharp's node_modules for building
	@${MV} \
		${WRKDIR}/${dep_node_addon_api_npm_name}-${dep_node_addon_api_version}/node_modules/${dep_node_addon_api_npm_name} \
		${WRKDIR}/${dep_sharp_npm_name}-${dep_sharp_version}/node_modules/${dep_sharp_npm_name}/node_modules/node-addon-api

do-build:
	@${ECHO_MSG} "====> Building sharp for FreeBSD..."
	@cd ${WRKDIR}/sharp-${dep_sharp_version}/node_modules/${dep_sharp_npm_name}/src && \
		${SETENV} HOME=${WRKDIR} PYTHON=${PYTHON_CMD} CXXFLAGS="-I${LOCALBASE}/include" \
			node-gyp configure build --nodedir=${LOCALBASE} && \
		${MKDIR} ${WRKSRC}/node_modules/openclaw/node_modules/@img/sharp-freebsd-${NODE_ARCH} && \
		${CP} build/Release/sharp-freebsd-${NODE_ARCH}.node \
			${WRKSRC}/node_modules/openclaw/node_modules/@img/sharp-freebsd-${NODE_ARCH}/sharp.node

do-install:
	# install node_modules
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib
	@cd ${WRKSRC} && \
		${COPYTREE_SHARE} node_modules ${STAGEDIR}${PREFIX}/lib
	# remove *.node binaries for non-FreeBSD platforms
	@${FIND} ${STAGEDIR}${PREFIX}/lib/node_modules \
		-name "*.node" ! -path "*freebsd*" -delete
	# update shebang
	${REINPLACE_CMD} -i '' \
		-e "s|#!/usr/bin/env node|#!${PREFIX}/bin/node|" \
		${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/openclaw.mjs
	# set exec bit
	@${CHMOD} +x \
		${STAGEDIR}${PREFIX}/lib/node_modules/${PACKAGE_NAME}/openclaw.mjs
	# create wrapper script
	@${MKDIR} ${STAGEDIR}${PREFIX}/bin
	@${ECHO_CMD} '#!/bin/sh' > ${STAGEDIR}${PREFIX}/bin/openclaw
	@${ECHO_CMD} 'exec ${PREFIX}/lib/node_modules/${PACKAGE_NAME}/openclaw.mjs "$$@"' \
		>> ${STAGEDIR}${PREFIX}/bin/openclaw
	@${CHMOD} +x ${STAGEDIR}${PREFIX}/bin/openclaw

.include <bsd.port.mk>
