PORTNAME=	fpp
PORTVERSION=	1.1
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	NL/fortran/ \
		http://ports.toco-domains.de/
DISTNAME=	fdfpp

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fortran preprocessor for FORTRAN 77 and Fortran 90 programs
WWW=		https://netlib.org/fortran/

USES=		tar:tgz

ALL_TARGET=	bsd44

OPTIONS_DEFINE=	DOCS
PORTDOCS=	README fpp_spec fpp_license.ps

PLIST_FILES=	bin/fpp \
		share/man/man1/fpp.1.gz

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bsd44/fpp ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/man1/fpp.1 ${STAGEDIR}${PREFIX}/share/man/man1
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
