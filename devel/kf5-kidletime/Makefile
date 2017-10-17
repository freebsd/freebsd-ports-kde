# $FreeBSD: branches/plasma5/KDE/devel/kf5-kidletime/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kidletime
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for monitoring user activity

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core dbus gui qmake_build widgets x11extras
USE_XORG=	ice sm x11 xext xcb xscrnsaver

.include <bsd.port.mk>
