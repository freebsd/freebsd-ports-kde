PORTNAME=	axmldec
PORTVERSION=	1.2.0
DISTVERSIONPREFIX=	v
PORTREVISION=	15
CATEGORIES=	devel

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Stand-alone binary AndroidManifest.xml decoder
WWW=		https://github.com/ytsutano/axmldec

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE.md

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake compiler:c++14-lang cpe minizip:ng pkgconfig
CPE_VENDOR=	${PORTNAME}_project
USE_GITHUB=	yes
GH_ACCOUNT=	ytsutano

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
