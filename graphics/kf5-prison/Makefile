# $FreeBSD: branches/plasma5/KDE/graphics/kf5-prison/Makefile 13614 2017-01-21 08:10:15Z tcberner $

PORTNAME=	prison
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	API to prodcue barcodes

LIB_DEPENDS=	libdmtx.so:graphics/libdmtx \
		libqrencode.so:graphics/libqrencode

USES=		cmake:outsource compiler:c++11-lang kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core gui qmake_build testlib widgets

.include <bsd.port.mk>
