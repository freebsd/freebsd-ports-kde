PORTNAME=	CheMPS2
DISTVERSIONPREFIX=	v
DISTVERSION=	1.8.12
PORTREVISION=	6
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Spin-adapted implementation of DMRG for ab initio quantum chemistry
WWW=		https://github.com/SebWouters/CheMPS2

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libhdf5.so:science/hdf5 \
		libsz.so:science/libaec

USES=		blaslapack:openblas cmake fortran
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	SebWouters

CMAKE_ARGS+=	-DSHARED_ONLY:BOOL=ON
CMAKE_ARGS+=	-DENABLE_TESTS:BOOL=OFF
CMAKE_ARGS+=	-DENABLE_XHOST:BOOL=OFF # shouldn't optimize the port in case of central build
CMAKE_ARGS+=	-DENABLE_OPENMP:BOOL=OFF # find_package(OpenMP) is broken since the merge into cmake: bug#223678
CMAKE_ARGS+=	-DLAPACK_LIBRARIES="-lopenblas" # can't find it using find_package for some reason

.include <bsd.port.mk>
