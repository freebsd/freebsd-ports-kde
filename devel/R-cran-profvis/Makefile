PORTNAME=	profvis
DISTVERSION=	0.4.0
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	uzsolt@FreeBSD.org
COMMENT=	Interactive visualizations for profiling R code
WWW=		https://cran.r-project.org/web/packages/profvis/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

CRAN_DEPENDS=	R-cran-htmlwidgets>=0.3.2:www/R-cran-htmlwidgets \
		R-cran-rlang>=0.4.9:devel/R-cran-rlang \
		R-cran-stringr>0:textproc/R-cran-stringr \
		R-cran-vctrs>0:devel/R-cran-vctrs
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}
TEST_DEPENDS=	R-cran-knitr>0:print/R-cran-knitr \
		R-cran-rmarkdown>0:textproc/R-cran-rmarkdown \
		R-cran-shiny>0:www/R-cran-shiny \
		R-cran-testthat>=3.0.0:devel/R-cran-testthat

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
