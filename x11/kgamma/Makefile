# $FreeBSD$

PORTNAME=	kgamma
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11 kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 monitor calibration tool

USES=		cmake:outsource kde:4 tar:xz
USE_XORG=	x11 xxf86vm
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_KDE=	kdelibs automoc4

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	${KDE4_APPLICATIONS_VERSION}

.include <bsd.port.mk>
