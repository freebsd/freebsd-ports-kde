# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD$

PORTNAME=	kscd
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	audio kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	CD Player for KDE

LICENSE=	GPLv2

LIB_DEPENDS=	libmusicbrainz3.so:audio/libmusicbrainz3

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	phonon moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
