# $FreeBSD: branches/plasma5/KDE/deskutils/kube/Makefile 13970 2017-04-26 19:42:11Z tcberner $

PORTNAME=	kube
PORTVERSION=	0.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	deskutils kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE mail client

LIB_DEPENDS=	libKAsync.so:devel/kasync \
		libsink.so:databases/sink

USES=		cmake:outsource compiler:c++11-lib gettext kde:5
USE_KDE=	codecs coreaddons ecm package
# pim components
USE_KDE+=	mime messagelib
USE_QT5=	core gui location network qml quick testlib webchannel \
		webengine widgets \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

PLIST_SUB=	SHLIB_VER="5.5.1"

USE_GITHUB=	yes
GH_ACCOUNT=	KDE

.include <bsd.port.mk>
