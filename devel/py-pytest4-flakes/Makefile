PORTNAME=	pytest4-flakes
PORTVERSION=	4.0.5
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:C/4//}-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Pytest plugin for efficiently checking python source with pyflakes (legacy version for pytest4)
WWW=		https://github.com/fschulze/pytest-flakes

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Depends on expiring devel/py-pytest4
EXPIRATION_DATE=2025-06-21

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}pytest-flakes

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest4>=2.8.0:devel/py-pytest4@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes
PYDISTUTILS_PKGNAME=	${PORTNAME:C/4//}

.include <bsd.port.mk>
