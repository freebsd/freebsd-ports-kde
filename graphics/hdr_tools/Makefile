PORTNAME=	hdr_tools
PORTVERSION=	0.0.2010.11.23	# unspecified by the author, so use the date
PORTREVISION=	23
CATEGORIES=	graphics
MASTER_SITES=	http://ttic.uchicago.edu/~cotter/projects/hdr_tools/archives/ \
		http://freebsd.nsu.ru/distfiles/
DISTNAME=	hdr_src

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Command-line tools for creating and manipulating HDR images
WWW=		https://ttic.uchicago.edu/~cotter/projects/hdr_tools/

LICENSE=	GPLv3

LIB_DEPENDS=	libpopt.so:devel/popt \
		libtiff.so:graphics/tiff \
		libOpenEXR.so:graphics/openexr \

USES=		compiler:c++11-lang gmake magick:6 pkgconfig tar:tgz
NO_WRKSUBDIR=	yes

PROGRAMS=	hdr_adjust hdr_convert hdr_create hdr_denoise hdr_fix_ca \
		hdr_squish

PLIST_FILES=	${PROGRAMS:S,^,bin/,}

.include <bsd.port.pre.mk>

.if ${MACHINE_CPU:Msse2}
CXXFLAGS+=	-msse2 -mfpmath=sse
.endif

.if ${COMPILER_FEATURES:Mopenmp}
CXXFLAGS+=	-fopenmp
.endif

post-patch:
	@${REINPLACE_CMD} -e 's,RGBColorspace,s&,' ${WRKSRC}/image.cc

do-install:
	${INSTALL_PROGRAM} ${PROGRAMS:S,^,${WRKSRC}/,} \
		${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.post.mk>
