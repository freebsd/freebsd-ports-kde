# $FreeBSD$

PORTNAME=	declarative
DISTVERSION=	${QT6_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt6-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt declarative framework for dynamic user interfaces

BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:devel/vulkan-headers

USES=		cmake compiler:c++17-lang gl python:3.5+ \
		qt-dist:6
USE_GL=		gl
USE_QT=		base
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

CMAKE_ARGS+=	-DCMAKE_PREFIX_PATH=${PREFIX}/lib/qt6/cmake \
		-DCMAKE_MODULE_PATH=${PREFIX}/lib/qt6/cmake 

post-patch:
	${REINPLACE_CMD} -e "s#python3#${PYTHON_CMD}#g" ${WRKSRC}/cmake/QtDeclarativeSetup.cmake
.include <bsd.port.mk>
