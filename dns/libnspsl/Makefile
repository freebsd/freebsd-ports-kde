PORTNAME=	libnspsl
DISTVERSION=	0.1.7
CATEGORIES=	dns
MASTER_SITES=	https://download.netsurf-browser.org/libs/releases/
DISTNAME=	${PORTNAME}-${DISTVERSION}-src

MAINTAINER=	nc@FreeBSD.org
COMMENT=	NetSurf public suffix list handling
WWW=		https://www.netsurf-browser.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	netsurf-buildsystem>=1.5:devel/netsurf-buildsystem

USES=		gmake
USE_LDCONFIG=	yes
MAKE_ENV+=	BUILD_CC="${CC}" COMPONENT_TYPE="lib-shared"
PLIST_SUB+=	VERSION=${PORTVERSION}

WRKSRC=	${WRKDIR}/${PORTNAME}-${DISTVERSION}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libnspsl.so*

.include <bsd.port.mk>
