PORTNAME=	xmill
DISTVERSION=	0.8
CATEGORIES=	archivers
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Efficient compressor for XML
WWW=		https://sourceforge.net/projects/xmill/

DEPRECATED=	Outdated and abandoned, last release in 2004
EXPIRATION_DATE=2025-07-31

USES=		dos2unix zip
DOS2UNIX_FILES=	${MAKEFILE} XMill/*.cpp
USE_CXXSTD=	c++14

MAKEFILE=	makefile

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/xcmill bin/xdemill bin/xmilltest bin/xmillexample \
		bin/xmillinspect bin/ppmzip
PORTDOCS=	*
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

post-patch:
# Allow to build with modern GCC
	@${REINPLACE_CMD} -e 's,friend,& class,' ${WRKSRC}/XMill/*.?pp \
		${WRKSRC}/xmillinspect/xmillinspect.h

do-install:
.for p in ${PLIST_FILES:T}
	(cd ${WRKSRC}/unix && ${INSTALL_PROGRAM} ${p} ${STAGEDIR}${PREFIX}/bin)
.endfor

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/documentation && ${INSTALL_DATA} * ${STAGEDIR}${DOCSDIR})

do-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${INSTALL_DATA} * ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
