# $FreeBSD: branches/plasma5/KDE/games/kubrick/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	kubrick
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 tar:xz
USE_GL=		gl glu
USE_KDE=	kdelibs libkdegames automoc4
USE_QT4=	corelib dbus gui network opengl svg xml \
		moc_build qmake_build rcc_build uic_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
