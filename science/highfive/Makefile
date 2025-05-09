PORTNAME=	highfive
DISTVERSIONPREFIX=	v
DISTVERSION=	2.10.1
CATEGORIES=	science devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Header-only C++ HDF5 interface
WWW=		https://github.com/BlueBrain/HighFive

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libhdf5.so:science/hdf5
RUN_DEPENDS=	${LOCALBASE}/include/boost/multi_array.hpp:devel/boost-libs \
		${LOCALBASE}/include/xtensor/xtensor.hpp:math/xtensor
TEST_DEPENDS=	catch2>0:devel/catch2

USES=		cmake eigen:3,run
USE_GITHUB=	yes
GH_ACCOUNT=	BlueBrain
GH_PROJECT=	HighFive

CMAKE_OFF=	HIGHFIVE_USE_BOOST HIGHFIVE_UNIT_TESTS HIGHFIVE_EXAMPLES

NO_BUILD=	yes
NO_ARCH=	yes

do-test: # one test fails, see https://github.com/BlueBrain/HighFive/issues/634
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DHIGHFIVE_UNIT_TESTS:BOOL=ON -DHIGHFIVE_USE_BOOST=ON -DHIGHFIVE_USE_EIGEN:BOOL=ON -DHIGHFIVE_USE_XTENSOR=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
