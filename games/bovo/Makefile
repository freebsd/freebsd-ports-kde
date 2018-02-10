# $FreeBSD$

PORTNAME=	bovo
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	coreaddons ecm kdeclarative libkdegames newstuff xmlgui
USE_QT5=	buildtools_build concurrent core gui network  \
		qmake_build qml quick svg widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
