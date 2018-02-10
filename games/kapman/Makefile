# $FreeBSD$

PORTNAME=	kapman
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons ecm i18n libkdegames \
		notifyconfig windowsystem xmlgui
USE_QT5=	buildtools_build core gui qmake_build svg widgets xml

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
