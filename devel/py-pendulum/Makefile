PORTNAME=	pendulum
PORTVERSION=	2.1.1
PORTREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Python package to ease datetimes manipulation
WWW=		https://pendulum.eustace.io

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-dateutil>=2.6:devel/py-python-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytz>=2018.3:devel/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytzdata>=2020.1:devel/py-pytzdata@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

PORTSCOUT=	skipv:2.1.2

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/pendulum/_extensions/_helpers*.so
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/pendulum/parsing/_iso8601*.so

.include <bsd.port.mk>
