# $FreeBSD$

PORTNAME=	superkaramba
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Widget framework for KDE

USES=		cmake:outsource kde:4 python:2 tar:xz
USE_KDE=	kdelibs automoc4 qimageblitz
USE_QT4=	qmake_build moc_build rcc_build uic_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	${KDE4_APPLICATIONS_VERSION}

.include <bsd.port.mk>
