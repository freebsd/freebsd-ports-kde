# $FreeBSD: branches/plasma5/KDE/games/lskat/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	lskat
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 libkdegames kdelibs
USE_QT4=	corelib dbus gui \
		moc_build qmake_build rcc_build svg uic_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
