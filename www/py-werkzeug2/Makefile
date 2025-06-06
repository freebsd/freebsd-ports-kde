PORTNAME=	werkzeug
PORTVERSION=	2.3.8
CATEGORIES=	www python
MASTER_SITES=	PYPI \
		https://github.com/pallets/werkzeug/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	2

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Python utilities collection for building WSGI applications (2.x)
WWW=		https://palletsprojects.com/p/werkzeug/ \
		https://github.com/pallets/werkzeug

CONFLICTS=	${PYTHON_PKGNAMEPREFIX}werkzeug

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flit-core>=0<4:devel/py-flit-core@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markupsafe>=2.1.1:textproc/py-markupsafe@${PY_FLAVOR}

USES=		cpe python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

CPE_VENDOR=	palletsprojects

OPTIONS_DEFINE=	EXAMPLES WATCHDOG
WATCHDOG_DESC=	Monitor filesystem events

WATCHDOG_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}watchdog>=2.3:devel/py-watchdog@${PY_FLAVOR}

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
