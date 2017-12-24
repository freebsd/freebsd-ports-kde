# $FreeBSD$

PORTNAME=		falkon
DISTVERSION=	2.1.99
CATEGORIES=	www

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Web browser based on WebKit engine and Qt Framework

LICENSE=	GPLv3

USE_KDE=	wallet
USE_QT5=	core dbus gui location network printsupport qml quick \
					sql webchannel webengine widgets x11extras \
					buildtools_build qmake_build
USE_XORG=	xcb

USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	1ea0c570c415f87e944530c7536257b1baa4c4bf

CONFLICTS_INSTALL=	qupzilla-qt[45]*

.include <bsd.port.mk>
