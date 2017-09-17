# $FreeBSD: branches/plasma5/KDE/sysutils/kf5-bluez-qt/Makefile 13250 2016-11-06 16:34:10Z tcberner $

# Note: this probably does not work yet (TOOD: find out if bluez-qt works on
#       on FreeBSD or what is needed to make it work).

PORTNAME=	bluez-qt
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	sysutils kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt wrapper for Bluez 5 DBus API

USES=		cmake:outsource compiler:c++11-lib kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core dbus network \
		qmake_build qml quick testlib

.include <bsd.port.mk>

