# $FreeBSD: branches/plasma5/PORTS/net-p2p/libktorrent/Makefile 13833 2017-04-09 15:07:57Z tcberner $

PORTNAME=	libktorrent
PORTVERSION=	2.0.1.20170710
CATEGORIES=	net-p2p kde
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Torrent library from KTorrent project

BUILD_DEPENDS=	${LOCALBASE}/include/boost/concept_check.hpp:devel/boost-libs

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libgmp.so:math/gmp \
		libqca-qt5.so:devel/qca-qt5

USES=		cmake:outsource gettext kde:5
USE_KDE=	archive completion config coreaddons crash ecm i18n \
		jobwidgets kio service solid widgetsaddons
USE_QT5=	core gui network testlib xml \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	35a0cdf

.include <bsd.port.mk>
