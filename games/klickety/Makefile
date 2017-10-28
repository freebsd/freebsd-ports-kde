# $FreeBSD: branches/plasma5/KDE/games/klickety/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	klickety
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 shebangfix tar:xz
SHEBANG_FILES=	klickety-2.0-inherit-ksame-highscore.pl
USE_KDE=	config configwidgets coreaddons dbusaddons doctools ecm \
		i18n kio libkdegames notifications notifyconfig \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui qmake_build qml quick widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
