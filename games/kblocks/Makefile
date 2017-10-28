# $FreeBSD: branches/plasma5/KDE/games/kblocks/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kblocks
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons dbusaddons i18n \
		itemmodels kio libkdegames newstuff notifyconfig \
		textwidgets widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core phonon4 qmake_build testlib

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
