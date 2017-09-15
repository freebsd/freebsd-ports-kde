# $FreeBSD: branches/plasma5/KDE/x11/kf5-kwayland/Makefile 13647 2017-01-31 12:36:24Z tcberner $

PORTNAME=	kwayland
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 Client and Server library wrapper for the Wayland libraries

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:multimedia/v4l_compat
LIB_DEPENDS=	libwayland-client.so:graphics/wayland

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig \
		tar:xz
USE_GL=		egl
USE_KDE=	ecm
USE_QT5=	buildtools_build concurrent core gui qmake_build testlib

.include <bsd.port.mk>
