# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libkcddb
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PKGNAMESUFFIX=	-kde4
CATEGORIES=	audio kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE CDDB library

LIB_DEPENDS=	libmusicbrainz5.so:audio/libmusicbrainz5

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	qtestlib moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_BRANCH=		stable
KDE_APPLICATIONS_VERSION=       16.08.3

.include <bsd.port.mk>
