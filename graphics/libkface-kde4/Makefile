# $FreeBSD: branches/plasma5/KDE/graphics/libkface-kde4/Makefile 13750 2017-03-11 19:58:37Z tcberner $

PORTNAME=	libkface
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for face recognition

# Ugly "fix" to work with both the quarterly branch and head
.if !exists(${.CURDIR:H:H}/graphics/opencv)
LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv2
.else
LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv
.endif

USES=		cmake pathfix pkgconfig kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	corelib qmake_build moc_build rcc_build uic_build

USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	${KDE4_APPLICATIONS_VERSION}

.include <bsd.port.mk>
