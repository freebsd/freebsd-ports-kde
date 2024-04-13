PORTNAME=	plasma-workspace-wallpapers
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	2
CATEGORIES=	x11-themes kde
PKGNAMEPREFIX=	plasma5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 wallpapers
WWW=		https://www.kde.org/plasma-desktop

RUN_DEPENDS=	plasma6-plasma-workspace-wallpapers>0:x11-themes/plasma6-plasma-workspace-wallpapers

USES=		kde:5 

# work around limitations in kde.mk
NO_BUILD=       yes
NO_ARCH=	yes
DISTFILES=	#
EXTRACT_ONLY=	#
_DUMMY=		${PKGNAMEPREFIX}${PORTNAME}-dummy
PLIST_FILES=	${DATADIR}/${_DUMMY}

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${TOUCH} ${STAGEDIR}${DATADIR}/${_DUMMY}

.include <bsd.port.mk>
