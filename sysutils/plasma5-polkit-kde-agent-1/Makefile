# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-polkit-kde-agent-1/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	polkit-kde-agent-1
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 daemon providing a polkit authentication UI

LIB_DEPENDS=	libpolkit-qt5-core-1.so:sysutils/polkit-qt5

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	config coreaddons crash dbusaddons ecm i18n iconthemes \
		notifications widgetsaddons windowsystem
USE_QT5=	buildtools_build core dbus gui qmake_build widgets

.include <bsd.port.mk>
