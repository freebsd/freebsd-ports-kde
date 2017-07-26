# $FreeBSD$

PORTNAME=	libxkbcommon
PORTVERSION=	0.7.1
CATEGORIES=	x11
MASTER_SITES=	http://xkbcommon.org/download/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Keymap handling library for toolkits and window systems

LICENSE=	MIT

XORG_CAT=	lib
USES=		gmake bison tar:xz

USE_XORG=	xcb
MAKE_JOBS_UNSAFE=	yes
INSTALL_TARGET=	install-strip

# These values can be overriden via make.conf.
DEFAULT_XKB_RULES?=	xorg
DEFAULT_XKB_MODEL?=	pc105
DEFAULT_XKB_LAYOUT?=	us
DEFAULT_XKB_VARIANT?=	# none
DEFAULT_XKB_OPTIONS?=	# none

SUB_LIST=	DEFAULT_XKB_RULES="${DEFAULT_XKB_RULES}" \
		DEFAULT_XKB_MODEL="${DEFAULT_XKB_MODEL}" \
		DEFAULT_XKB_LAYOUT="${DEFAULT_XKB_LAYOUT}" \
		DEFAULT_XKB_VARIANT="${DEFAULT_XKB_VARIANT}" \
		DEFAULT_XKB_OPTIONS="${DEFAULT_XKB_OPTIONS}"

SUB_FILES=	pkg-message

CONFIGURE_ARGS=	--with-default-layout="${DEFAULT_XKB_LAYOUT}" \
		--with-default-model="${DEFAULT_XKB_MODEL}" \
		--with-default-options="${DEFAULT_XKB_OPTIONS}" \
		--with-default-rules="${DEFAULT_XKB_RULES}" \
		--with-default-variant="${DEFAULT_XKB_VARIANT}" \
		--without-doxygen \
		--with-x-locale-root=${PREFIX}/lib/X11/locale

.include <bsd.port.mk>
