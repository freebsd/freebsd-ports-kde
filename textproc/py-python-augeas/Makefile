PORTNAME=	python-augeas
PORTVERSION=	1.0.3
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johan@stromnet.se
COMMENT=	Pure python bindings for Augeas
WWW=		https://augeas.net

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.1.0:devel/py-cffi@${PY_FLAVOR}
LIB_DEPENDS=	libaugeas.so:textproc/augeas

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	distutils py3kplist

GH_ACCOUNT=	hercules-team

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${WRKSRC}/test/test_augeas.py

.include <bsd.port.mk>
