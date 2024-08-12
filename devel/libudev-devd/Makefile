PORTNAME=	libudev-devd
DISTVERSIONPREFIX=	v
DISTVERSION=	0.5.2
PORTREVISION=	1
CATEGORIES=	devel

PATCH_SITES=	https://github.com/wulf7/libudev-devd/commit/
PATCHFILES=	2778403203cead962f52c56378b154ee1d641be8.patch:-p1

MAINTAINER=	x11@FreeBSD.org
COMMENT=	libudev-compatible interface for devd
WWW=		https://github.com/wulf7/libudev-devd

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto

USE_GITHUB=	yes
GH_ACCOUNT=	wulf7

USES=		compiler:c11 localbase meson
USE_LDCONFIG=	yes

CFLAGS+=	-Wno-error

PLIST_FILES=	include/libudev.h \
		lib/libudev.so \
		lib/libudev.so.0 \
		lib/libudev.so.0.0.0 \
		libdata/pkgconfig/libudev.pc

OPTIONS_DEFINE=	GPL

GPL_DESC=	Enable GPL-licensed code
GPL_MESON_TRUE=	enable-gpl
GPL_VARS=	LICENSE+=LGPL21+ LICENSE_COMB=multi

.include <bsd.port.mk>
