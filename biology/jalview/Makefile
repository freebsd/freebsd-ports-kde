PORTNAME=	jalview
DISTVERSION=	2.11.2.5
CATEGORIES=	biology java
MASTER_SITES=	https://www.jalview.org/source/
DISTNAME=	${PORTNAME}_${DISTVERSION:S/./_/g}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Viewer and editor for multiple sequence alignments
WWW=		https://www.jalview.org

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	gradle761:devel/gradle761

USES=		java
JAVA_VERSION=	11

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_LOCALE=	en_US.UTF-8

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
SUB_FILES=	jalview.sh
SUB_LIST=	JAVA=${JAVA}

NO_ARCH=	yes

# to rebuild the deps archive:
#   1. set DEV_UPDATE_MODE=yes
#   2. make makesum build
#   3. upload the *-deps archive
#   4. set DEV_UPDATE_MODE=no
#   5. make clean makesum

DEV_UPDATE_MODE=	no

DEPS_CACHE_DIR=		${WRKDIR}

.if (${DEV_UPDATE_MODE} == "yes")
post-build:
	@cd ${DEPS_CACHE_DIR} && ${TAR} czf ${DISTDIR}/${PORTNAME}-${DISTVERSION}-deps${EXTRACT_SUFX} gradle-${PORTNAME}
	@${ECHO} "(!!!) Please upload the deps archive: ${DISTDIR}/${PORTNAME}-${DISTVERSION}-deps${EXTRACT_SUFX}"
.else
MASTER_SITES+=	LOCAL/yuri/:deps
DISTFILES+=	${PORTNAME}-${DISTVERSION}-deps${EXTRACT_SUFX}:deps
GRADLE_ARGS=	--offline

post-extract: # need a separate extract step because the cache is in /tmp, and not under work/ like with maven
	@cd ${DEPS_CACHE_DIR} && ${TAR} xzf ${DISTDIR}/${PORTNAME}-${DISTVERSION}-deps${EXTRACT_SUFX}
.endif

BINARY_ALIAS=	git=false java=${JAVA}

PLIST_FILES=	bin/jalview \
		${DATADIR}/jalview.jar

do-build:
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} gradle761 \
		--gradle-user-home ${DEPS_CACHE_DIR}/gradle-${PORTNAME} --project-cache-dir ${DEPS_CACHE_DIR}/gradle-${PORTNAME} \
		${GRADLE_ARGS} --build-cache shadowJar

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/jalview.sh ${STAGEDIR}${PREFIX}/bin/jalview
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/build/libs/jalview-all-TEST-j11.jar ${STAGEDIR}${DATADIR}/jalview.jar

.include <bsd.port.mk>
