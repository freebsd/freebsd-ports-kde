 #$FreeBSD$

PORTNAME=	libmediawiki
PORTVERSION=	5.0.0
CATEGORIES=	net kde
DIST_SUBDIR=	KDE/digikam

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for accessing MediaWiki sites

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource kde:5
USE_KDE=	coreaddons ecm
USE_QT5=	core network testlib \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	3df0a45

.include <bsd.port.mk>
