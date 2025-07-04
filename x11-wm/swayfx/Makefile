PORTNAME=	sway
DISTVERSION=	0.5.1
CATEGORIES=	x11-wm wayland
PKGNAMESUFFIX=	${GH_PROJECT:S/${PORTNAME}//}

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Sway, but with eye candy!
WWW=		https://github.com/WillPower3309/swayfx

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto \
		wayland-protocols>=1.24:graphics/wayland-protocols
LIB_DEPENDS=	libjson-c.so:devel/json-c \
		libevdev.so:devel/libevdev \
		libudev.so:devel/libudev-devd \
		libpcre2-8.so:devel/pcre2 \
		libdrm.so:graphics/libdrm \
		libwayland-egl.so:graphics/wayland \
		libscenefx-0.3.so:x11-toolkits/scenefx03 \
		libwlroots-0.18.so:x11-toolkits/wlroots018 \
		libinput.so:x11/libinput \
		libxkbcommon.so:x11/libxkbcommon

USES=		compiler:c11 gnome meson pkgconfig xorg
USE_GITHUB=	yes
USE_GNOME=	cairo pango
USE_XORG=	pixman
GH_ACCOUNT=	WillPower3309
GH_PROJECT=	swayfx
MESON_ARGS=	-Dsd-bus-provider=basu

CONFLICTS_INSTALL=	${PORTNAME} ${PORTNAME}-devel

OPTIONS_DEFINE=	BASU MANPAGES PIXBUF SWAYBG X11
OPTIONS_DEFAULT=BASU MANPAGES PIXBUF SWAYBG X11
OPTIONS_SUB=	yes

BASU_DESC=		Tray in swaybar via basu
BASU_LIB_DEPENDS=	libbasu.so:devel/basu
BASU_MESON_ENABLED=	tray

MANPAGES_BUILD_DEPENDS=	scdoc>=1.9.2:textproc/scdoc
MANPAGES_MESON_ENABLED=	man-pages

PIXBUF_USE=		GNOME=gdkpixbuf
PIXBUF_MESON_ENABLED=	gdk-pixbuf

SWAYBG_DESC=		Default command to set background
SWAYBG_RUN_DEPENDS=	swaybg:x11/swaybg

X11_USE=		XORG=xcb
X11_LIB_DEPENDS=	libxcb-icccm.so:x11/xcb-util-wm

post-patch:
# Let @sample handle default files under etc/
	@${REINPLACE_CMD} -e '/config\.in/{ N; s/@BASENAME@/&.sample/; }' \
		${WRKSRC}/meson.build
# Extract (snapshot) version from the port instead of meson.build
	@${REINPLACE_CMD} -i .nogit -e 's/git.found()/false/' \
		-e '/project_version/s/@0@/${DISTVERSIONFULL}/' \
		${WRKSRC}/meson.build

.include <bsd.port.mk>
