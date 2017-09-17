# $FreeBSD: branches/plasma5/KDE/devel/kf5-kdeclarative/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kdeclarative
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing integration of QML and KDE Frameworks

LIB_DEPENDS=	libepoxy.so:graphics/libepoxy

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig \
		tar:xz
USE_KDE=	completion config coreaddons globalaccel guiaddons i18n \
		iconthemes jobwidgets kio package service widgetsaddons \
		windowsystem
USE_QT5=	buildtools_build core dbus gui network qmake_build qml \
		quick testlib widgets xml

.include <bsd.port.mk>
