PORTNAME=	toxext
DISTVERSIONPREFIX=	v
DISTVERSION=	0.0.3
PORTREVISION=	7
CATEGORIES=	net-im net-p2p

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Extension library for tox
WWW=		https://github.com/toxext/toxext

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libopus.so:audio/opus \
		libsodium.so:security/libsodium \
		libtoxcore.so:net-im/tox \
		libvpx.so:multimedia/libvpx

USES=		cmake:testing localbase:ldflags pkgconfig
USE_GITHUB=	yes

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_TESTING_ON=	BUILD_TESTS

CFLAGS+=	-fPIC # see https://github.com/toxext/toxext/issues/7

.include <bsd.port.mk>
