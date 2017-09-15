# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-powerdevil/Makefile 13376 2016-11-11 15:30:28Z tcberner $

PORTNAME=	powerdevil
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 tool to manage the power consumption settings

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 pkgconfig tar:xz
USE_KDE=	activities auth config dbusaddons ecm emoticons \
		globalaccel i18n idletime init itemmodels kdelibs4support \
		kio libkscreen notifyconfig plasma-workspace solid wayland
USE_QT5=	buildtools_build core dbus gui qmake_build widgets x11extras

.include <bsd.port.mk>
