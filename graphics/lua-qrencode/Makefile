PORTNAME=	qrencode
PORTVERSION=	1.1.1
CATEGORIES=	graphics
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}

MAINTAINER=	mm@FreeBSD.org
COMMENT=	libqrencode wrapper for the Lua programming language
WWW=		https://github.com/vincascm/qrencode

LICENSE=	MIT

LIB_DEPENDS=	libqrencode.so:graphics/libqrencode \
		libpng.so:graphics/png

USES=		lua:module pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	vincascm
GH_TAGNAME=	v1.1.1
MAKE_ARGS=	LUABIN=${LUA_CMD} LUAPKG=lua-${LUA_VER}

DOCSDIR=	${LUA_DOCSDIR}
EXAMPLESDIR=	${LUA_EXAMPLESDIR}

CFLAGS+=	-I${LUA_INCDIR} -I${LOCALBASE}/include

do-install:
	${MKDIR} ${STAGEDIR}${LUA_MODLIBDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/qrencode.so ${STAGEDIR}${LUA_MODLIBDIR}

.include <bsd.port.mk>
