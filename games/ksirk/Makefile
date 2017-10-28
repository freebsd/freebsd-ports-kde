# $FreeBSD: branches/plasma5/KDE/games/ksirk/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	ksirk
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

LIB_DEPENDS=	libqca.so:devel/qca

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libkdegames automoc4
USE_QT4=	corelib dbus gui corelib gui network phonon qt3support svg xml \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
