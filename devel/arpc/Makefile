PORTNAME=	arpc
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	ed@FreeBSD.org
COMMENT=	GRPC-like RPC library that supports file descriptor passing
WWW=		https://github.com/NuxiNL/arpc

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Unmaintained upstream
EXPIRATION_DATE=2025-07-31

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyPEG2>=2.15.2:textproc/py-pyPEG2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}toposort>=1.5:devel/py-toposort@${PY_FLAVOR}
LIB_DEPENDS=	libargdata.so:devel/argdata
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyPEG2>=2.15.2:textproc/py-pyPEG2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}toposort>=1.5:devel/py-toposort@${PY_FLAVOR}

USES=		compiler:c++17-lang cmake:insource localbase:ldflags python \
		shebangfix
SHEBANG_FILES=	scripts/aprotoc.py
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	NuxiNL

PLIST_FILES=	bin/aprotoc include/arpc++/arpc++.h \
		lib/libarpc.so lib/libarpc.so.1

# Require the unit tests to pass prior to installing.
post-build:
	@trap '' PIPE && ${WRKSRC}/arpc_tests

.include <bsd.port.mk>
