PORTNAME=	catch
DISTVERSION=	3.14.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Header-only test framework for C++
WWW=		https://github.com/catchorg/Catch2

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cmake compiler:c++14-lang python:build

USE_GITHUB=	yes
GH_ACCOUNT=	catchorg
GH_PROJECT=	Catch2

CMAKE_ARGS=	-DCMAKE_INSTALL_DOCDIR=${DOCSDIR}
CMAKE_ON=	BUILD_SHARED_LIBS \
		CATCH_DEVELOPMENT_BUILD
CMAKE_OFF=	CATCH_ENABLE_WERROR

PORTSCOUT=	limit:^2\.

OPTIONS_DEFINE=	DOCS

PORTDOCS=	*

# tests as of 3.14.0:
# test cases:   517 |   494 passed | 7 skipped | 16 failed as expected
# assertions: 84776 | 84753 passed | 23 failed as expected

do-test:
	@${BUILD_WRKSRC}/tests/SelfTest

.include <bsd.port.mk>
