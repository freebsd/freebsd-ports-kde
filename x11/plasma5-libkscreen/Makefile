# $FreeBSD: branches/plasma5/KDE/x11/plasma5-libkscreen/Makefile 13609 2017-01-19 20:38:51Z tcberner $

PORTNAME=	libkscreen
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 screen management library

USES=		cmake:outsource compiler:c++11-lib cpe kde:5 pathfix \
		pkgconfig tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core dbus gui qmake_build testlib x11extras
USE_XORG=	x11 xcb xrandr

# Temporary option to get rid of the dependency on wayland.
OPTIONS_DEFINE=	WAYLAND
OPTIONS_SUB=	yes
OPTIONS_DEFAULT=WAYLAND
WAYLAND_DESC=	Build libkscreen Wayland backend
WAYLAND_USE=	KDE=wayland

.include <bsd.port.mk>
