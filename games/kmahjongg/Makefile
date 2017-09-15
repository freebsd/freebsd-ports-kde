# $FreeBSD: branches/plasma5/KDE/games/kmahjongg/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kmahjongg
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

LIB_DEPENDS=	libKF5KMahjongglib.so:games/libkmahjongg

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config coreaddons crash dbusaddons doctools ecm kdeclarative \
		libkdegames newstuff xmlgui
USE_QT5=	buildtools_build core gui network qmake_build qml svg widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
