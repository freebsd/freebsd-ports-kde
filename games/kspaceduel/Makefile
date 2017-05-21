# $FreeBSD: branches/plasma5/KDE/games/kspaceduel/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	kspaceduel
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs libkdegames
USE_QT4=	corelib dbus gui svg \
		moc_build qmake_build rcc_build uic_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
