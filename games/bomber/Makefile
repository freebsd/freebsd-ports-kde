# $FreeBSD: branches/plasma5/KDE/games/bomber/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	bomber
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons dbusaddons ecm i18n \
		kio libkdegames xmlgui
USE_QT5=	buildtools_build qmake_build core gui widgets qml \
		quick phonon4

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
