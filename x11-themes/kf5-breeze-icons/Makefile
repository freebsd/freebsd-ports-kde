PORTNAME=	breeze-icons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-themes kde
PKGNAMEPREFIX=	kf5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Breeze icon theme for KDE

RUN_DEPENDS=	kf6-breeze-icons>0:x11-themes/kf6-breeze-icons

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
