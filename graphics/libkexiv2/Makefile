# $FreeBSD: branches/plasma5/KDE/graphics/libkexiv2-kf5/Makefile 13698 2017-03-08 17:47:13Z tcberner $

PORTNAME=	libkexiv2
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Exiv2 library interface for KDE

LIB_DEPENDS=	libexiv2.so:graphics/exiv2

USES=		cmake:outsource compiler:c++11-lang kde:5 pkgconfig tar:xz
USE_KDE=	ecm
USE_QT5=	core gui \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
