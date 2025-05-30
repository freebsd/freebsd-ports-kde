PORTNAME=	primme
DISTVERSIONPREFIX=	v
DISTVERSION=	3.2.3
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Iterative eigensolver for symmetric and hermitian matrices
WWW=		https://www.cs.wm.edu/~andreas/software/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING.txt

TEST_DEPENDS=	gfortran${GCC_DEFAULT}:lang/gcc${GCC_DEFAULT}

USES=		gmake localbase:ldflags
USE_GITHUB=	yes
MAKEFILE=	makefile
ALL_TARGET=	solib
USE_LDCONFIG=	yes

BINARY_ALIAS=	make=${GMAKE}

CFLAGS+=	-fPIC
LDFLAGS+=	${LAPACKLIB} -lm

OPTIONS_RADIO=	LINALG
OPTIONS_RADIO_LINALG=	ATLAS NETLIB OPENBLAS
OPTIONS_DEFAULT=	OPENBLAS

LINALG_DESC=		Choose which linear algebra interface (LAPACK) implementation to use:

ATLAS_USES=		blaslapack:atlas
NETLIB_USES=		blaslapack:netlib
NETLIB_LDFLAGS=		-lblas # XXX why this isn't covered by blaslapack:netlib?
OPENBLAS_USES=		blaslapack:openblas

TEST_ENV=	${MAKE_ENV} \
		LDFLAGS="-lm -Wl,-rpath=${LOCALBASE}/lib/gcc${GCC_DEFAULT} ${LOCALBASE}/lib/gcc${GCC_DEFAULT}/libgcc_s.so" \
		USE_MPI=no USE_PETSC=no PETSC_DIR=${LOCALBASE} \
		LD_LIBRARY_PATH=${STAGEDIR}${PREFIX}/lib
TEST_ARGS=	F77=gfortran${GCC_DEFAULT} FC=gfortran${GCC_DEFAULT} FLDR=gfortran${GCC_DEFAULT}
TEST_TARGET=	all_tests test

PLIST_FILES=	include/primme.h \
		include/primme_eigs.h \
		include/primme_eigs_f77.h \
		include/primme_eigs_f90.inc \
		include/primme_f77.h \
		include/primme_f90.inc \
		include/primme_svds.h \
		include/primme_svds_f77.h \
		include/primme_svds_f90.inc \
		lib/libprimme.so \
		lib/libprimme.so.3 \
		lib/libprimme.so.3.2

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libprimme.so.3.2

.include <bsd.port.mk>
