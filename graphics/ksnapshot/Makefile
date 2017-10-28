# $FreeBSD$

PORTNAME=	ksnapshot
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 screen capture program

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libkipi automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_XORG=	x11 xext xfixes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

.include <bsd.port.mk>
