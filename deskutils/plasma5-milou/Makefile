# $FreeBSD: branches/plasma5/KDE/deskutils/plasma5-milou/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	milou
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	deskutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 search application built on top of Baloo

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	auth codecs config coreaddons i18n kdeclarative package \
		plasma-framework runner service
USE_QT5=	buildtools_build core gui network qmake_build qml \
		quick script testlib widgets

.include <bsd.port.mk>
