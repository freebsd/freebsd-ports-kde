# $FreeBSD: branches/plasma5/KDE/games/lskat/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	lskat
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash ecm \
		guiaddons i18n libkdegames notifyconfig widgetsaddons xmlgui
USE_QT5=	core dbus gui network qml quick svg widgets xml \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
