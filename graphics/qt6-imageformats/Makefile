# $FreeBSD$

PORTNAME=	imageformats
DISTVERSION=	${QT6_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt6-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt6 plugins for additional image formats: TIFF, MNG, TGA, WBMP

BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:devel/vulkan-headers
LIB_DEPENDS=	libjasper.so:graphics/jasper \
		libwebp.so:graphics/webp

USES=		cmake compiler:c++17-lang pkgconfig \
		qt-dist:6
USE_QT=		base
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
