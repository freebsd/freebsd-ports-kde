# $FreeBSD: branches/plasma5/KDE/graphics/libkface/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	libkface
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for face recognition

LICENSE=	GPLv2+ LGPL20+
LICENSE_COMB=	multi

LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv

# Use localbase:ldflags for OpenCV with TBB
USES=		cmake:outsource localbase:ldflags pkgconfig kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core gui qmake_build sql widgets xml

USE_LDCONFIG=	yes

.include <bsd.port.mk>
