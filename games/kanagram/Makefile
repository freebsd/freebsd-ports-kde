# $FreeBSD: branches/plasma5/KDE/games/kanagram/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kanagram
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Letter order game for KDE

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons crash doctools ecm \
		i18n kdeclarative kio libkeduvocdocument newstuff sonnet
USE_QT5=	core gui opengl qml quick svg widgets xml \
		qmake_build buildtools_build

.include <bsd.port.mk>
