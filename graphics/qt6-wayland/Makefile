# $FreeBSD$

PORTNAME=	wayland
DISTVERSION=	${QT6_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt6-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt6 wrapper for Wayland

LIB_DEPENDS=	libwayland-client.so:graphics/wayland
BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:devel/vulkan-headers
USES=		cmake compiler:c++17-lang gl \
		qt-dist:6
USE_GL=		gl egl
USE_QT=		base declarative
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
