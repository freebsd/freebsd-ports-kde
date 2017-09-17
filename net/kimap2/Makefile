# $FreeBSD: branches/plasma5/KDE/net/kimap2/Makefile 13970 2017-04-26 19:42:11Z tcberner $

PORTNAME=	kimap2
PORTVERSION=	0.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE API for IMAP support

LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2

USES=		cmake:outsource compiler:c++11-lib gettext kde:5
USE_KDE=	codecs coreaddons ecm \
		mime
USE_QT5=	core network buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	KDE

.include <bsd.port.mk>
