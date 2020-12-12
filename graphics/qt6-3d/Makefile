# $FreeBSD$

PORTNAME=	3d
DISTVERSION=	${QT6_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt6-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	C++ and QML APIs for easy inclusion of 3D graphics

BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:devel/vulkan-headers
LIB_DEPENDS=	libassimp.so:multimedia/assimp

USES=		cmake compiler:c++17-lang gl python:build \
		qt-dist:6
USE_GL=		gl
USE_QT=		base declarative shadertools
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
