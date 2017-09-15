# $FreeBSD$

PORTNAME=	libkfbapi
DISTVERSION=	1.0
PORTREVISION=	5
CATEGORIES=	net kde
MASTER_SITES=	KDE/stable/libkfbapi/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for accessing Facebook services

LICENSE=	LGPL20

LIB_DEPENDS=	libqjson.so:devel/qjson

USES=		cmake:outsource gettext kde:4 pathfix tar:bzip2
USE_KDE=	automoc4 kdelibs pimlibs
USE_LDCONFIG=	yes
USE_QT4=	gui webkit \
		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
