# $FreeBSD$

PORTNAME=	kdevelop-kde4-php
PORTVERSION=	${KDEVELOP_VERSION:S/4./1./}
PORTREVISION=	4
CATEGORIES=	devel kde
MASTER_SITES=	KDE/${KDEVELOP_BRANCH}/kdevelop/${KDEVELOP_VERSION}
DIST_SUBDIR=	KDE/kdevelop/${KDEVELOP_VERSION}
DISTNAME=	${PORTNAME:C/-kde4//}-${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	PHP support for KDevelop

LIB_DEPENDS=	libkdevplatforminterfaces.so:devel/kdevplatform-kde4
BUILD_DEPENDS=	${KDE_PREFIX}/bin/kdev-pg-qt:devel/kdevelop-kde4-pg-qt

USES=		cmake:outsource compiler:c++11-lib kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build
MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	PHPDOCS NLS
OPTIONS_DEFAULT=	PHPDOCS
OPTIONS_SUB=	yes

PHPDOCS_DESC=	Integrate with PHP.net documentation
PHPDOCS_RUN_DEPENDS=	${KDE_PREFIX}/lib/kde4/kdevphpdocs.so:devel/kdevelop-kde4-php-docs

NLS_USES=	gettext
NLS_CMAKE_OFF=	-DBUILD_po:BOOL=Off

.include <bsd.port.mk>
