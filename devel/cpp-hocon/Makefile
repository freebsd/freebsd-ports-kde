PORTNAME=	cpp-hocon
PORTVERSION=	0.3.0
PORTREVISION=	9
CATEGORIES=	devel

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	C++ configuration library
WWW=		https://github.com/puppetlabs/cpp-hocon

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Project got archived
EXPIRATION_DATE=2025-05-09

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libleatherman_util.so:devel/leatherman

USES=		cmake:noninja compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	puppetlabs

PLIST_SUB+=	PORTVERSION="${PORTVERSION}"

CMAKE_ARGS+=	-DBUILD_SHARED_LIBS=SHARED
CMAKE_OFF=	ENABLE_CXX_WERROR
TEST_TARGET=	test
USE_LDCONFIG=	yes

.include <bsd.port.mk>
