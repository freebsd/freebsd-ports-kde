PORTNAME=	zip
DISTVERSION=	2.3.2
CATEGORIES=	archivers
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Cross-Platform 'zip' Compression
WWW=		https://github.com/r-lib/zip #readme

LICENSE=	CC0-1.0

TEST_DEPENDS=	R-cran-R6>0:devel/R-cran-R6 \
		R-cran-covr>0:devel/R-cran-covr \
		R-cran-testthat>0:devel/R-cran-testthat \
		R-cran-withr>0:devel/R-cran-withr

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
