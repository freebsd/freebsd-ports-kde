# $FreeBSD: branches/plasma5/KDE/net/krfb/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	krfb
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	VNC server for KDE

LIB_DEPENDS=	libvncserver.so:net/libvncserver

USES=		alias cmake:outsource compiler:c++11-lib gettext jpeg \
		kde:5 pkgconfig tar:xz
USE_KDE=	completion config coreaddons crash dbusaddons dnssd doctools \
		ecm i18n notifications wallet widgetsaddons xmlgui
USE_QT5=	buildtools_build core dbus gui qmake_build widgets x11extras
USE_XORG=	xtst

OPTIONS_DEFINE=		TELEPATHY
OPTIONS_SUB=		yes
TELEPATHY_DESC=		Support for Telepathy Tubes
TELEPATHY_LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5

.include <bsd.port.mk>
