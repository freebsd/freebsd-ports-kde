PORTNAME=	plasma-integration
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	1
KDE_PLASMA_VERSION=	${KDE_PLASMA6_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Platform Theme integration plugins for the Plasma workspaces
WWW=		https://www.kde.org/plasma-desktop

LIB_DEPENDS=	libwayland-client.so:graphics/wayland
RUN_DEPENDS=	plasma6-plasma-integration>=0:x11/plasma6-plasma-integration

USES=		cmake compiler:c++11-lib gettext kde:5 pkgconfig qt:5 tar:xz \
		xorg
USE_KDE=	config configwidgets guiaddons i18n iconthemes kio \
		notifications wayland windowsystem xmlgui \
		ecm:build plasma-wayland-protocols:build
USE_QT=		core dbus gui network quickcontrols2 wayland \
		buildtools:build qmake:build
USE_XORG=	x11 xcb xcursor

CMAKE_ON=	BUILD_QT5
CMAKE_OFF=	BUILD_QT6

PLIST_FILES=	${QT_PLUGINDIR}/platformthemes/KDEPlasmaPlatformTheme5.so

.include <bsd.port.mk>
