# $FreeBSD: branches/plasma5/KDE/games/klines/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	klines
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons dbusaddons ecm \
		guiaddons i18n iconthemes itemviews kio libkdegames \
		newstuff service widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui network qmake_build \
		qml quick svg widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
