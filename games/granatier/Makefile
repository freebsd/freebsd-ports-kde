# $FreeBSD: branches/plasma5/KDE/games/granatier/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	granatier
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config coreaddons dbusaddons ecm guiaddons i18n \
		iconthemes itemviews kio libkdegames newstuff \
		notifyconfig widgetsaddons xmlgui
USE_QT5=	core gui xml buildtools_build qmake_build widgets \
		svg qml quick

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
