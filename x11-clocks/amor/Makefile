# $FreeBSD$

PORTNAME=	amor
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-clocks kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Small animation which sits on top of active window

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

.include <bsd.port.mk>
