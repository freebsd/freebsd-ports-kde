# $FreeBSD$

PORTNAME=	kmines
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons dbusaddons ecm i18n \
		kio libkdegames notifyconfig textwidgets \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui network qmake_build \
		qml quick

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
