# $FreeBSD$

PORTNAME=	base
DISTVERSION=	${QT6_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt6-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt base (core, gui, widgets, network,...)

LIB_DEPENDS=	libcups.so:print/cups \
		libdrm.so:graphics/libdrm \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libharfbuzz.so:print/harfbuzz \
		libicui18n.so:devel/icu \
		libicuuc.so:devel/icu \
		libinput.so:x11/libinput \
		libmtdev.so:devel/libmtdev \
		libodbc.so:databases/unixODBC \
		libpcre2-16.so:devel/pcre2 \
		libpng16.so:graphics/png \
		libudev.so:devel/libudev-devd \
		libzstd.so:archivers/zstd

USES=		cmake compiler:c++17-lang gl gnome jpeg perl5 qt-dist:6 xorg
USE_GL=		gl egl
USE_GNOME=	glib20 gtk30 pango
USE_XORG=	x11
CMAKE_OFF=	QT_FEATURE_eglfs

.include <bsd.port.mk>
