PORTNAME=	adoc-mode.el
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.0
PORTREVISION=	8
CATEGORIES=	textproc elisp

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Major-mode for editing AsciiDoc files in Emacs
WWW=		https://github.com/bbatsov/adoc-mode

LICENSE=	GPLv2+

USES=		emacs
USE_GITHUB=	yes
GH_ACCOUNT=	bbatsov
GH_PROJECT=	adoc-mode

CONFLICTS_INSTALL=	adoc-mode.el-emacs_*

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${EMACS_SITE_LISPDIR}/adoc-mode.el
PORTDOCS=	CHANGELOG.md CONTRIBUTING.md README.adoc

OPTIONS_DEFINE=	DOCS

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/adoc-mode.el* \
		${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:C/^/${WRKSRC}\//} \
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
