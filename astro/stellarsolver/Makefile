PORTNAME=	stellarsolver
DISTVERSION=	2.6
CATEGORIES=	astro

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Astrometric Plate Solver built on Astrometry.net and SEP
WWW=		https://github.com/rlancaste/stellarsolver

LICENSE=	GPLv3

LIB_DEPENDS=	libcfitsio.so:astro/cfitsio \
		libgsl.so:math/gsl \
		libwcs.so:astro/wcslib

USES=		cmake desktop-file-utils iconv ninja qt:6 pkgconfig
USE_QT=		base
USE_GITHUB=	yes
GH_ACCOUNT=	rlancaste

USE_LDCONFIG=	yes

CMAKE_ARGS+=	-DBUILD_BATCH_SOLVER=on -DNEED_DECLARE_QSORT_R=off

.include <bsd.port.mk>
