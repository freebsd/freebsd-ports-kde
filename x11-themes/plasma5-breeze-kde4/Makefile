# $FreeBSD: branches/plasma5/KDE/x11-themes/plasma5-breeze-kde4/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	breeze
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-themes kde kde-plasma
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Breeze visual style for KDE4

USES=		cmake:outsource compiler:c++11-lang cpe gettext \
		kde:4 pkgconfig tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus gui moc_build qmake_build rcc_build svg uic_build
USE_XORG=	x11 xcb

CMAKE_ARGS=	-DUSE_KDE4:BOOL=TRUE

DISTINFO_FILE=	${.CURDIR}/../plasma5-breeze/distinfo

.include <bsd.port.mk>
