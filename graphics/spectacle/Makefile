# $FreeBSD$

PORTNAME=	spectacle
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE screen capture program

LIB_DEPENDS=	libxcb-cursor.so:x11/xcb-util-cursor

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_KDE=	config coreaddons dbusaddons doctools ecm i18n kdeclarative \
		kio libkipi libkscreen notifications widgetsaddons \
		windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui printsupport qmake_build \
		quick widgets x11extras
USE_XORG=	x11 xext xfixes

.include <bsd.port.mk>
