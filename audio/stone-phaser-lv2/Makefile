PORTNAME=	stone-phaser
DISTVERSIONPREFIX=	v
DISTVERSION=	0.1.2-17
DISTVERSIONSUFFIX=	-gda92961
PORTREVISION=	1
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Classic analog phaser effect, made with DPF and Faust
WWW=		https://github.com/jpcima/stone-phaser

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	lv2>0:audio/lv2 \
		bash:shells/bash

USES=		compiler:c++0x gl gmake gnome pkgconfig shebangfix xorg
SHEBANG_GLOB=	*.sh
USE_GITHUB=	yes
GH_ACCOUNT=	jpcima
GH_TUPLE=	DISTRHO:DPF:e69074e:dpf/dpf
USE_GL=		gl
USE_GNOME=	cairo
USE_XORG=	x11

MAKE_ARGS=	BUILD_LADSPA=false
CFLAGS+=	-I${FILESDIR}

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/vst

.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64" || ${ARCH} == "i386"
EXTRA_PATCHES=	${FILESDIR}/extra-patch-dpf_Makefile.base.mk
.else
EXTRA_PATCHES=	${FILESDIR}/extra-patch-nosse-dpf_Makefile.base.mk
.endif

.include <bsd.port.post.mk>
