PORTNAME=	cmdtest
PORTVERSION=	0.33.s20191128
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	http://git.liw.fi/cmdtest/snapshot/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-3cba2b5e030b05567057ba2b6720f4a87e6e1f4f

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Black box testing of Unix programs
WWW=		https://liw.fi/cmdtest/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markdown>0:textproc/py-markdown@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cliapp>0:devel/py-cliapp@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ttystatus>0:devel/py-ttystatus@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markdown>0:textproc/py-markdown@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cliapp>0:devel/py-cliapp@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ttystatus>0:devel/py-ttystatus@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e "s,python3,${PYTHON_CMD},g" ${WRKSRC}/setup.py

.include <bsd.port.mk>
