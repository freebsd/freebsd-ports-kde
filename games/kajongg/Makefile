# $FreeBSD: branches/plasma5/KDE/games/kajongg/Makefile 13848 2017-04-10 13:10:54Z tcberner $

IGNORE=		Requires PyQt5 for python3 which is broken at the moment.

PORTNAME=	kajongg
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}twisted>=16.6.0:devel/py-twisted

USES=		cmake:outsource pkgconfig python:3 pyqt:5 kde:5 tar:xz \
		twisted:build,run sqlite
USE_KDE=	config doctools ecm
USE_PYQT=	core gui svg widgets
USE_QT5=	core gui svg widgets \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
