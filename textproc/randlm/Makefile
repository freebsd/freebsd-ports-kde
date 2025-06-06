PORTNAME=	randlm
PORTVERSION=	0.2.5
PORTREVISION=	29
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Toolkit for building randomized language models
WWW=		https://sourceforge.net/projects/randlm/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_aarch64=		fails to compile: invalid output constraint =a in assembler
BROKEN_armv6=		fails to compile: invalid output constraint =a in assembler
BROKEN_riscv64=		fails to compile: invalid output constraint =a in assembler

BUILD_DEPENDS=	${LOCALBASE}/include/google/sparse_hash_map:devel/sparsehash
LIB_DEPENDS=	libboost_thread.so:devel/boost-libs
RUN_DEPENDS=	${LOCALBASE}/include/google/sparse_hash_map:devel/sparsehash

USES=		autoreconf libtool localbase:ldflags compiler:c++11-lang
USE_CXXSTD=	gnu++98
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=yes
INSTALL_TARGET=	install-strip

post-patch:
	cd ${WRKSRC}/hadoop && ${MV} strings.cpp strings.cc && ${MV} strings.h s.h
	${REINPLACE_CMD} -e s#strings.h#s.h# ${WRKSRC}/hadoop/r_compute_ngram_counts.cpp ${WRKSRC}/hadoop/m_compute_ngram_counts_batch.cpp
	@${REINPLACE_CMD} -e 's,-L./,,' -e 's,-lLDHT,libLDHT.la,' \
		-e 's,-lticpp,libticpp.la,' -e 's,-lRandLM,libRandLM.la,' \
		${WRKSRC}/src/LDHT/Makefile.am \
		${WRKSRC}/src/RandLM/Makefile.am

.include <bsd.port.mk>
