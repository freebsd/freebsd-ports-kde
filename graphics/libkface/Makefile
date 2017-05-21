# Created by: tcberner
# $FreeBSD: branches/plasma5/KDE/graphics/libkface/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	libkface
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for face recognition

LICENSE=	GPLv2+ LGPL20+
LICENSE_COMB=	multi

# Ugly "fix" to work with both the quarterly branch and head
.if !exists(${.CURDIR:H:H}/graphics/opencv)
LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv2
.else
LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv
.endif

USES=		cmake:outsource pkgconfig kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core gui qmake_build sql widgets xml

USE_LDCONFIG=	yes

.include <bsd.port.mk>
