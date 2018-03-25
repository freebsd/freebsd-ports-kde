# $FreeBSD$

PORTNAME=	kpkpass
DISTVERSION=	0.0.1.20180318
CATEGORIES=	security kde kde
MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library to deal with Apple Wallet pass files
DIST_SUBDIR=	KDE

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 \
		shared-mime-info
USE_KDE=	archive ecm
USE_QT5=	core gui testlib \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	kde
GH_TAGNAME=	add657

.include <bsd.port.mk>
