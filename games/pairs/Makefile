# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/games/pairs/Makefile 13697 2017-03-08 17:43:58Z tcberner $

PORTNAME=	pairs
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Memory and pairs game for KDE

LICENSE=	GPLv2

#IGNORE=		crashes on startup

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus declarative gui network opengl phonon svg xml \
		xmlpatterns \
		moc_build qmake_build rcc_build uic_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	${KDE4_APPLICATIONS_VERSION}

.include <bsd.port.mk>
