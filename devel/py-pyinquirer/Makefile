PORTNAME=	PyInquirer
PORTVERSION=	1.0.3
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gmm@tutanota.com
COMMENT=	Collection of common interactive command line user interfaces
WWW=		https://github.com/CITGuru/PyInquirer/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}prompt-toolkit>0:devel/py-prompt-toolkit@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>0:textproc/py-pygments@${PY_FLAVOR}

USES=		localbase python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
