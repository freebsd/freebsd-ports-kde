# $FreeBSD: branches/plasma5/KDE/x11/plasma5-plasma-integration/Makefile 13948 2017-04-25 15:08:16Z tcberner $

PORTNAME=	plasma-integration
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Platform Theme integration plugins for the Plasma workspaces

RUN_DEPENDS=	${LOCALBASE}/share/fonts/noto/NotoSans-Regular.ttf:x11-fonts/noto-lite \
		${LOCALBASE}/share/fonts/hack-font/Hack-Regular.otf:x11-fonts/hack-font

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 pkgconfig \
		shebangfix tar:xz
USE_KDE=	auth bookmarks breeze codecs completion config configwidgets \
		coreaddons ecm i18n iconthemes itemviews jobwidgets kio \
		notifications service solid wayland \
		widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network quickcontrols2 widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	xcb xcursor

SHEBANG_FILES=	src/platformtheme/fonts_akregator.pl \
		src/platformtheme/fonts_global.pl \
		src/platformtheme/fonts_kate.pl \
		src/platformtheme/mono_font.pl

.include <bsd.port.mk>
