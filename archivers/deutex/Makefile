PORTNAME=	deutex
DISTVERSION=	5.2.3
CATEGORIES=	archivers games
MASTER_SITES=	https://github.com/Doom-Utils/${PORTNAME}/releases/download/v${DISTVERSION}/

MAINTAINER=	kai@FreeBSD.org
COMMENT=	WAD file manipulator for Doom, Heretic, Hexen, and Strife
WWW=		https://github.com/Doom-Utils/deutex

LICENSE=	GPLv2 LGPL20 MIT
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL20=	${WRKSRC}/COPYING.LIB

BUILD_DEPENDS=	a2x:textproc/asciidoc

USES=		autoreconf pkgconfig tar:zst

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/deutex \
		share/man/man6/${PORTNAME}.6.gz
PORTDOCS=	*

OPTIONS_DEFINE=		DOCS PNG
OPTIONS_DEFAULT=	PNG

PNG_LIB_DEPENDS=	libpng.so:graphics/png

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/NEWS.adoc ${WRKSRC}/README.adoc ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
