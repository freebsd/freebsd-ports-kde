# $FreeBSD: branches/plasma5/KDE/x11/plasma5-plasma-workspace/Makefile 13980 2017-04-29 09:14:58Z tcberner $

PORTNAME=	plasma-workspace
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Plasma workspace

LIB_DEPENDS=	libcln.so:math/cln \
		libdbusmenu-qt5.so:devel/libdbusmenu-qt5 \
		libqalculate.so:math/libqalculate \
		libxcb-image.so:x11/xcb-util-image \
		libxcb-util.so:x11/xcb-util
RUN_DEPENDS=	ck-launch-session:sysutils/consolekit2\
		iceauth:x11/iceauth \
		xsetroot:x11/xsetroot \
		xset:x11/xset \
		xmessage:x11/xmessage \
		${LOCALBASE}/libdata/pkgconfig/xkeyboard-config.pc:x11/xkeyboard-config \
		iso-codes>=0:misc/iso-codes

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 pkgconfig \
		tar:xz
USE_KDE=	activities activitymanagerd attica auth baloo bookmarks \
		codecs completion config configwidgets coreaddons crash \
		dbusaddons doctools emoticons filemetadata globalaccel \
		guiaddons holidays i18n iconthemes idletime init itemmodels \
		itemviews jobwidgets js jsembed kcmutils kdeclarative \
		kdelibs4support kdesu kdewebkit kio kscreenlocker \
		notifications package pty kwin libkscreen libksysguard \
		newstuff notifyconfig parts plasma-framework \
		plasma-integration prison runner service solid sonnet \
		texteditor textwidgets unitconversion wallet wayland \
		widgetsaddons windowsystem xmlgui xmlrpcclient \
		breeze_run breeze-icons_run oxygen-icons5_run \
		kde-cli-tools_run kded_run milou_run
USE_QT5=	buildtools_build concurrent core dbus graphicaleffects gui \
		network paths_run phonon4 printsupport qdbus qmake_build qml quick \
		quickcontrols_run script sql testlib webkit widgets x11extras \
		xml
USE_XORG=	ice sm x11 xau xcb xcomposite xext xfixes xft xkbfile xrender xtst

CMAKE_ARGS+=	-DBUILD_TESTING:BOOL=OFF

OPTIONS_DEFINE= 	CALENDAR
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}
OPTIONS_SUB=		yes

CALENDAR_DESC=	Support display of holidays in calendar applet
CALENDAR_USE=	KDE=holidays

post-patch:
# set the paths in startkde
	${REINPLACE_CMD} -e 's|%%KDE_PREFIX%%|${KDE_PREFIX}|g' \
			 -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
			 -e 's|%%QT_BINDIR%%|${QT_BINDIR}|g' \
			 -e 's|%%QT_IMPORTDIR%%|${QT_IMPORTDIR}|g' \
			 -e 's|%%QT_PLUGINDIR%%|${QT_PLUGINDIR}|g' \
			 -e 's|%%QT_QMLDIR%%|${QT_QMLDIR}|g' \
		${PATCH_WRKSRC}/startkde/startkde.cmake

.include <bsd.port.mk>
