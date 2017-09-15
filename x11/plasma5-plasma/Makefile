# $FreeBSD: branches/plasma5/KDE/x11/plasma5-plasma/Makefile 13722 2017-03-08 20:32:26Z tcberner $

PORTNAME=	plasma
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde
PKGNAMEPREFIX=	plasma5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE5 plasma meta port

LICENSE=	LGPL20

USES=		kde:5 metaport
# remove:
#   * bluedevil as we do have bluez
#   * powerdevil as it needs UDev at the moment
#   * plasma-pa don't depend on plamsa-pa by default
#   * breeze-kde4 don't pull in qt4 bits
#   * plasma-mediacenter is not shipped anymore
USE_KDE=	${_USE_PLASMA_ALL:Nbluedevil:Npowerdevil:Nplasma-pa:Nbreeze-kde4:Nplasma-mediacenter}
# pull bsd.qt.mk for QT_PLUGINDIR in the kf5-dependencies
USE_QT5=	#

.include <bsd.port.mk>
