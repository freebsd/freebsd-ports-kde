PORTNAME=	llama.el
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.3
PORTREVISION=	1
CATEGORIES=	devel elisp

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Compact syntax for short lambda in Emacs Lisp
WWW=		https://github.com/tarsius/llama

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	compat.el>=30.1.0.0:misc/compat.el
RUN_DEPENDS=	compat.el>=30.1.0.0:misc/compat.el

USES=		emacs:build gmake
USE_GITHUB=	yes
GH_ACCOUNT=	tarsius
GH_PROJECT=	llama

MAKE_ARGS=	LOAD_PATH=" -L ${PREFIX}/${EMACS_SITE_LISPDIR} -L ."
MAKE_JOBS_UNSAFE=	Opening input file: No such file or directory, /wrkdirs/usr/ports/devel/llama.el/work-nox/llama-0.6.0/.#llama-autoloads.el

CONFLICTS_INSTALL=	llama.el-emacs_*

NO_ARCH=	yes

PLIST_FILES=	${EMACS_SITE_LISPDIR}/llama-autoloads.el \
		${EMACS_SITE_LISPDIR}/llama.el

PORTDOCS=	README.org

OPTIONS_DEFINE=	DOCS

ELISP_FILES=	llama-autoloads.el llama.el

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	${INSTALL_DATA}  ${ELISP_FILES:C/^/${WRKSRC}\//} \
		${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:C/^/${WRKSRC}\//} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
