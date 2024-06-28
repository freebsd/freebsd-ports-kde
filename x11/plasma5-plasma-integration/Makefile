PORTNAME=	plasma-integration
DISTVERSION=	${KDE_PLASMA_VERSION}
KDE_PLASMA_VERSION=	${KDE_PLASMA6_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Platform Theme integration plugins for the Plasma workspaces
WWW=		https://www.kde.org/plasma-desktop

LIB_DEPENDS=	libwayland-client.so:graphics/wayland \
		libxkbcommon.so:x11/libxkbcommon
RUN_DEPENDS=	hack-font>0:x11-fonts/hack-font \
		noto-basic>0:x11-fonts/noto-basic \
		noto-emoji>0:x11-fonts/noto-emoji

USES=		cmake gettext gl kde:5 pkgconfig qt:5 tar:xz xorg
USE_KDE=	config guiaddons i18n iconthemes kio notifications wayland \
		windowsystem xdg-desktop-portal-kde xmlgui \
		ecm:build plasma-wayland-protocols:build
USE_GL=		gl opengl
USE_XORG=	x11 xcb xcursor
USE_QT=		core gui wayland \
		buildtools:build qmake:build

CMAKE_ON=	BUILD_QT5
CMAKE_OFF=	BUILD_QT6

DESCR=		${.CURDIR:H:H}/x11/plasma6-plasma/pkg-descr

PLIST_FILES=	${QT_PLUGINDIR}/platformthemes/KDEPlasmaPlatformTheme5.so

.include <bsd.port.mk>
