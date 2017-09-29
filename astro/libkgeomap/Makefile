# $FreeBSD: branches/plasma5/KDE/astro/libkgeomap/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	libkgeomap
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	astro kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for browsing photos on a map

LICENSE=	GPLv2+ LGPL20+
LICENSE_COMB=	multi

BUILD_DEPENDS=	${LOCALBASE}/include/boost/graph/buffer_concepts.hpp:devel/boost-libs
LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_QT5=	buildtools_build concurrent core gui network qmake_build \
		webkit widgets xml
USE_KDE=	config ecm i18n kio marble textwidgets

USE_LDCONFIG=	yes

.include <bsd.port.mk>
