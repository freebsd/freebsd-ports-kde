# Created by: Stefan Jahn <stefan.jahn@nemesis-sektor.de>
# $FreeBSD$

PORTNAME=	knights
PORTVERSION=	2.5.0.20160321
CATEGORIES=	games kde

MAINTAINER=	syncer@gmail.com
COMMENT=	KDE chess interface

RUN_DEPENDS=	${LOCALBASE}/bin/gnuchess:games/gnuchess

LICENSE=	GPLv2

USES=		cmake:outsource kde:5
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		dbusaddons ecm i18n libkdegames package plasma-framework \
		plotting service solid sonnet textwidgets wallet widgetsaddons \
		xmlgui
USE_QT5=	concurrent core dbus gui network qml quick svg widgets xml \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	4aebcaf

.include <bsd.port.mk>
