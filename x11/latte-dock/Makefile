# $FreeBSD$

PORTNAME=	latte-dock
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.1.20171014
CATEGORIES=	x11

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Replacement dock for Plasma desktops

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=libxcb-util.so:x11/xcb-util

USES=		cmake:outsource compiler:c++11-lib kde:5

USE_KDE=	activities archive auth codecs config configwidgets \
		coreaddons crash dbusaddons ecm globalaccel i18n iconthemes \
		kdeclarative notifications package plasma-framework \
		service wayland widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network qml quick widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	ice sm x11 xcb xext

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	0df9540

.include <bsd.port.mk>
