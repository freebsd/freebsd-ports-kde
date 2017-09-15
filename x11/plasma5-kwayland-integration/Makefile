# $FreeBSD: branches/plasma5/KDE/x11/plasma5-kwayland-integration/Makefile 13647 2017-01-31 12:36:24Z tcberner $

PORTNAME=	kwayland-integration
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	integration plugins for the wayland

LIB_DEPENDS=	libepoxy.so:graphics/libepoxy \
		libwayland-client.so:graphics/wayland
BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:multimedia/v4l_compat

USES=		cmake:outsource compiler:c++11-lib cpe kde:5 tar:xz
USE_KDE=	ecm idletime wayland windowsystem
USE_QT5=	buildtools_build core gui qmake_build widgets

.include <bsd.port.mk>
