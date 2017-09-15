# $FreeBSD: branches/plasma5/KDE/x11/kf5-frameworks/Makefile 13619 2017-01-21 11:39:47Z tcberner $

PORTNAME=	frameworks
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde
PKGNAMEPREFIX=	kf5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 frameworks meta port

USES=		metaport kde:5
# remove:
#   * bluez-qt as we do have bluez
USE_KDE=	${_USE_FRAMEWORKS_ALL:Nbluez-qt}
# pull bsd.qt.mk for QT_PLUGINDIR in the kf5-dependencies
USE_QT5=	#

.include <bsd.port.mk>
