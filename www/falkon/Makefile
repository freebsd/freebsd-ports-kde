# $FreeBSD$

PORTNAME=		falkon
DISTVERSION=	2.1.99.20180114
CATEGORIES=	www

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Web browser based on WebKit engine and Qt Framework

LICENSE=	GPLv3

USES=		cmake:outsource kde:5
USE_KDE=	wallet
USE_QT5=	core dbus gui location network printsupport qml quick \
		sql webchannel webengine widgets x11extras \
		buildtools_build qmake_build
USE_XORG=	xcb

USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	087c983

CONFLICTS_INSTALL=	qupzilla-qt[45]*

.include <bsd.port.mk>
