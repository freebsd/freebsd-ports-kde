PORTNAME=	libretro-shaders-slang
DISTVERSION=	g20260220
CATEGORIES=	games

MAINTAINER=	bsdcode@disroot.org
COMMENT=	Collection of slang shaders from libretro
WWW=		https://github.com/libretro/slang-shaders

# https://github.com/libretro/slang-shaders/issues/150
LICENSE=	GPLv1+ GPLv2+ GPLv3+ MIT PD
LICENSE_COMB=	multi

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	slang-shaders
GH_TAGNAME=	ff3bd235e1c59e73da2b878aa12dfce8b79f3dbf

MAKE_ARGS=	PREFIX=${PREFIX}

DATADIR=	${PREFIX}/share/libretro/shaders/shaders_slang
NO_ARCH=	yes
NO_BUILD=	yes

.include <bsd.port.mk>
