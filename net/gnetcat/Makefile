PORTNAME=	gnetcat
PORTVERSION=	0.7.1
PORTREVISION=	5
CATEGORIES=	net
MASTER_SITES=	SF/netcat/netcat/${PORTVERSION}
DISTNAME=	netcat-0.7.1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GPL'ed re-write of the well known networking tool netcat
WWW=		https://netcat.sourceforge.net/

USES=		gettext iconv tar:bzip2
GNU_CONFIGURE=	yes

INFO=		gnetcat
PLIST_FILES=	bin/gnetcat share/man/man1/gnetcat.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/netcat ${STAGEDIR}${PREFIX}/bin/gnetcat
	${INSTALL_MAN} ${WRKSRC}/doc/netcat.1 \
		${STAGEDIR}${PREFIX}/share/man/man1/gnetcat.1
	${INSTALL_DATA} ${WRKSRC}/doc/netcat.info \
		${STAGEDIR}${PREFIX}/${INFO_PATH}/gnetcat.info

.include <bsd.port.mk>
