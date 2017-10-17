# $FreeBSD: branches/plasma5/KDE/x11-toolkits/kf5-kxmlgui/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kxmlgui
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 user configurable main windows

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	attica auth codecs config configwidgets coreaddons ecm \
		globalaccel i18n iconthemes itemviews sonnet textwidgets \
		widgetsaddons windowsystem
USE_QT5=	buildtools_build core dbus gui network printsupport \
		qmake_build widgets xml

.include <bsd.port.mk>
