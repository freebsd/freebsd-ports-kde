PORTNAME=	json
DISTVERSIONPREFIX=	v
DISTVERSION=	3.12.0
CATEGORIES=	devel
PKGNAMEPREFIX=	nlohmann-

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	JSON library for Modern C++
WWW=		https://nlohmann.github.io/json/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.MIT

USES=		cmake:testing compiler:c++11-lib
USE_GITHUB=	yes
GH_ACCOUNT=	nlohmann

NO_BUILD=	yes
NO_ARCH=	yes

CMAKE_ON=	JSON_MultipleHeaders
CMAKE_OFF=	JSON_BuildTests
CMAKE_TESTING_ON=	JSON_BuildTests

# tests as of 3.12.0: 96% tests passed, 4 tests failed out of 101 (4 cmake_fetch_content* tests fail, https://github.com/nlohmann/json/issues/2951)

.include <bsd.port.mk>
