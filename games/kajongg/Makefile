# $FreeBSD: branches/plasma5/KDE/games/kajongg/Makefile 13848 2017-04-10 13:10:54Z tcberner $

IGNORE=		Requires python:3, but the dependency py-twisted is only available for python:2

PORTNAME=	kajongg
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource pkgconfig python:3 kde:5 tar:xz \
		twisted:build,run sqlite
USE_KDE=	ecm
USE_QT5=	buildtools_build qmake_build

CMAKE_ARGS=	-DINSTALL_KAJONGG:BOOL=TRUE

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
