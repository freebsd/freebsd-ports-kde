PORTNAME=	closql
DISTVERSIONPREFIX=	v
DISTVERSION=	2.4.0
PORTREVISION=	2
CATEGORIES=	databases elisp

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Store EIEIO objects using EmacSQL
WWW=		https://github.com/magit/closql

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	compat.el>=30.0.0.0:misc/compat.el \
		cond-let>=0.2.1:devel/cond-let \
		emacsql>=4.3.1:databases/emacsql
RUN_DEPENDS=	compat.el>=30.0.0.0:misc/compat.el \
		cond-let>=0.2.1:devel/cond-let \
		emacsql>=4.3.1:databases/emacsql

USES=		emacs:build gmake
USE_GITHUB=	yes
GH_ACCOUNT=	magit

ALL_TARGET=	autoloads

CONFLICTS_INSTALL=	closql-emacs_*

NO_ARCH=	yes

PLIST_FILES=	${EMACS_SITE_LISPDIR}/closql-autoloads.el \
		${EMACS_SITE_LISPDIR}/closql.el

PORTDOCS=	README.org

OPTIONS_DEFINE=	DOCS

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} *.el \
	   ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR})

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.org ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
