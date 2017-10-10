# $FreeBSD: branches/plasma5/KDE/x11-wm/plasma5-kwin/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kwin
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-wm kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 window manager

LIB_DEPENDS=	libXcursor.so:x11/libXcursor \
		libepoxy.so:graphics/libepoxy \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libudev.so:devel/libudev-devd \
		libwayland-cursor.so:graphics/wayland \
		libxcb-cursor.so:x11/xcb-util-cursor \
		libxcb-image.so:x11/xcb-util-image \
		libxcb-keysyms.so:x11/xcb-util-keysyms \
		libxkbcommon.so:x11/libxkbcommon
BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:multimedia/v4l_compat \
		Xwayland:x11-servers/xwayland
RUN_DEPENDS=	Xwayland:x11-servers/xwayland

USES=		cmake:outsource compiler:c++11-lib cpe gettext \
		kde:5 pkgconfig tar:xz
USE_GL=		egl
USE_KDE=	activities activities attica auth breeze codecs \
		completion config configwidgets coreaddons crash decoration \
		doctools doctools globalaccel i18n iconthemes idletime init \
		jobwidgets kcmutils kdeclarative kio package kscreenlocker \
		newstuff notifications plasma-framework service sonnet \
		textwidgets wayland widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build concurrent core dbus gui \
		multimedia network qmake_build qml quick script \
		testlib uiplugin uitools widgets x11extras xml
USE_XORG=	ice sm x11 xcb xext xi

.include <bsd.port.pre.mk>
.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1100000
# Base compiler clang 3.5 does not understand -Winconsistent-missing-override
EXTRA_PATCHES=	${PATCHDIR}/extra-patch-fbsd10
.endif

post-patch:
	${REINPLACE_CMD} '/sysmacros.h/d' \
		${PATCH_WRKSRC}/logind.cpp

.include <bsd.port.post.mk>
