# $FreeBSD$

PORTNAME=	kuser
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE user manager

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs pimlibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_BRANCH=	stable
KDE_APPLICATIONS_VERSION=       16.08.3

.include <bsd.port.mk>
