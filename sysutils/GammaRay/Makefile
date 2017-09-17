# $FreeBSD$

PORTNAME=		GammaRay
PORTVERSION=		2.7.0
DISTVERSIONPREFIX=	v
CATEGORIES=		sysutils

MAINTAINER=		kde@FreeBSD.org
COMMENT=		Tool to poke around in and modifiy a Qt-application

USES=			cmake:outsource kde:5 pkgconfig
USE_KDE=	        coreaddons syntaxhighlighting
USE_QT5=		3d concurrent core designer gui location network \
			printsupport qml quick script scripttools svg webkit \
			widgets xml \
			buildtools_build linguisttools_build qmake_build

OPTIONS_DEFINE=		DOCS
OPTIONS_DEFAULT=	DOCS
OPTIONS_SUB=		yes
DOCS_BUILD_DEPENDS=	doxygen:devel/doxygen
DOCS_CMAKE_BOOL=	GAMMARAY_BUILD_DOCS
DOCS_USE=		QT5=doc_build,qdoc_build

# Install mkspecs into the location used by the Qt ports.
CMAKE_ARGS=		-DKDE_INSTALL_USE_QT_SYS_PATHS:BOOL=TRUE

USE_GITHUB=		yes
GH_ACCOUNT=		KDAB

PLIST_SUB=		SHLIB_VER="${PORTVERSION}"

.include <bsd.port.mk>
