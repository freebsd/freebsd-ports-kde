# $FreeBSD: branches/plasma5/KDE/games/libkdegames-kde4/Makefile 13743 2017-03-10 23:32:54Z tcberner $

PORTNAME=	libkdegames
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications
PKGNAMESUFFIX=	kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries used by KDE 4 games

LIB_DEPENDS=	libsndfile.so:audio/libsndfile

USES=		cmake:outsource kde:4 openal tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus declarative gui network phonon svg xml \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	14.12.3

.include <bsd.port.mk>
