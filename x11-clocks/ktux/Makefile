# $FreeBSD$

IGNORE=		kde4-workspace is EOL

PORTNAME=	ktux
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-clocks kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tux-in-a-Spaceship screen saver

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs workspace automoc4
USE_QT4=	qt3support moc_build qmake_build rcc_build uic_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

.include <bsd.port.mk>
