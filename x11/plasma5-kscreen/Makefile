# $FreeBSD: branches/plasma5/KDE/x11/plasma5-kscreen/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kscreen
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 screen management library

USES=		cmake:outsource cpe gettext kde:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons dbusaddons ecm \
		globalaccel i18n libkscreen widgetsaddons xmlgui
USE_QT5=	buildtools_build core dbus gui network qmake_build qml quick \
		testlib widgets xml

.include <bsd.port.mk>
