PORTNAME=	bbparse
PORTVERSION=	0.1.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Library to parse Blackbox-created PCAPng files
WWW=		https://github.com/Netflix/bbparse

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	aarch64 amd64 powerpc64 powerpc64le riscv64

USE_GITHUB=	yes
GH_ACCOUNT=	Netflix

PIE_UNSAFE=	yes

PLIST_FILES=	lib/libbbparse.a \
		include/bbparse.h \
		share/man/man3/libbbparse.3.gz

MANPAGE_LINKS=	bbr_get_next bbr_get_stackname bbr_get_tlh bbr_init_fd bbr_init_file bbr_fini

.for l in ${MANPAGE_LINKS}
PLIST_FILES+=	share/man/man3/${l}.3.gz
.endfor

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib
	${MKDIR} ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/libbbparse.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/bbparse.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_MAN} ${WRKSRC}/libbbparse.3.gz ${STAGEDIR}${PREFIX}/share/man/man3
.for l in ${MANPAGE_LINKS}
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/libbbparse.3.gz ${STAGEDIR}${PREFIX}/share/man/man3/${l}.3.gz
.endfor

.include <bsd.port.mk>
