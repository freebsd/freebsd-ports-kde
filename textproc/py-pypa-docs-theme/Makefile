PORTNAME=	pypa-docs-theme
DISTVERSION=	g20180622
PORTREVISION=	1
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Common base Sphinx theme for PyPA projects
WWW=		https://github.com/pypa/pypa-docs-theme

LICENSE=	PSFL
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-docs-theme>=0:textproc/py-python-docs-theme@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
USE_GITHUB=	yes
GH_ACCOUNT=	pypa
GH_TAGNAME=	d2e63fb

NO_ARCH=	yes

.include <bsd.port.mk>
