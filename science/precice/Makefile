PORTNAME=	precice
DISTVERSIONPREFIX=	v
DISTVERSION=	3.1.2
PORTREVISION=	2
CATEGORIES=	science # physics

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Coupling library for partitioned multi-physics simulations
WWW=		https://precice.org/

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN=		fails to build with Boost>=1.87

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libmpicxx.so:net/mpich
RUN_DEPENDS=	${PYNUMPY}

USES=		cmake:noninja,testing compiler:c++14-lang eigen:3 gnome pkgconfig python shebangfix # fails with ninja: phony target 'binprecice' names itself as an input; ignoring
USE_GNOME=	libxml2
USE_LDCONFIG=	yes

USE_GITHUB=	yes

SHEBANG_FILES=	tools/profiling/precice-profiling

CMAKE_OFF=	BUILD_TESTING PRECICE_ENABLE_FORTRAN PRECICE_PythonActions

OPTIONS_DEFINE=	MPI PETSC EXAMPLES

MPI_CMAKE_BOOL=		PRECICE_MPICommunication
MPI_BUILD_DEPENDS=	openmpi>0:net/openmpi
MPI_RUN_DEPENDS=	openmpi>0:net/openmpi
MPI_BROKEN=		all tests crash with MPI, see https://github.com/precice/precice/issues/1331

PETSC_DESC=		Use PETSc linear algebra library
PETSC_CMAKE_BOOL=	PRECICE_FEATURE_PETSC_MAPPING
PETSC_LIB_DEPENDS=	libpetsc.so:science/PETSc
PETSC_IMPLIES=		MPI

PORTEXAMPLES=		*

# 3 tests time out, see https://github.com/precice/precice/issues/1331

post-install: # remove files which aren't docs
	@${RM} -r ${STAGEDIR}${PREFIX}/share/doc

.include <bsd.port.mk>
