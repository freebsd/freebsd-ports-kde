PORTNAME=	sqlitecpp
DISTVERSION=	3.3.2
CATEGORIES=	databases devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	SQLiteC++: Easy to use C++ SQLite3 wrapper
WWW=		https://github.com/SRombauts/SQLiteCpp

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

TEST_DEPENDS=	googletest>0:devel/googletest

USES=		cmake:testing compiler:c++11-lang sqlite
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	SRombauts
GH_PROJECT=	SQLiteCpp

CMAKE_ON=		BUILD_SHARED_LIBS
CMAKE_OFF=		SQLITECPP_INTERNAL_SQLITE SQLITECPP_RUN_CPPLINT
CMAKE_TESTING_ON=	SQLITECPP_BUILD_TESTS

# tests fail, see https://github.com/SRombauts/SQLiteCpp/issues/481

.include <bsd.port.mk>
