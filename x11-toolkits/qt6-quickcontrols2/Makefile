# $FreeBSD$

PORTNAME=	quickcontrols2
DISTVERSION=	${QT6_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt6-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	User interface controls based on Qt Quick

BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:devel/vulkan-headers

USES=		cmake compiler:c++17-lang \
		qt-dist:6
USE_QT=		base declarative
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
