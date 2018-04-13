# $FreeBSD$

PORTNAME=	purpose
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	misc kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Offers available actions for a specific purpose

USES=		cmake:outsource compiler:c++11-lang gettext \
		kde:5 pkgconfig tar:xz
USE_GNOME=	intltool
USE_KDE=	config coreaddons ecm i18n kdeclarative kio service widgetsaddons
USE_QT5=	concurrent core dbus gui network qml widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	KACCOUNTS KDECONNECT
OPTIONS_DEFAULT=	KACCOUNTS KDECONNECT
OPTIONS_SUB=		yes
KACCOUNTS_DESC=		Use kaccounts login data
KACCOUNTS_LIB_DEPENDS=	libaccounts-qt5.so:net-im/libaccounts-qt5 \
			libkaccounts.so:net-im/kaccounts-integration 
KACCOUNTS_CMAKE_BOOL_OFF=CMAKE_DISABLE_FIND_PACKAGE_KAccounts

KDECONNECT_DESC=	Integrate into kdeconnect
KDECONNECT_CMAKE_BOOL=	KDECONNECT
KDECONNECT_LIB_DEPENDS=	libkdeconnectdeclarativeplugin.so:deskutils/kdeconnect-kde-kf5

.include <bsd.port.mk>
