# $FreeBSD: branches/plasma5/KDE/net-im/ktp-common-internals/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-common-internals
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Telepathy internal library

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libtelepathy-logger-qt.so:net-im/telepathy-logger-qt5 \
		libotr.so:security/libotr \
		libaccounts-qt5.so:net-im/libaccounts-qt5 \
		libkaccounts.so:net-im/kaccounts-integration
RUN_DEPENDS=	${LOCALBASE}/lib/mission-control-plugins.0/mcp-account-manager-accounts-sso.so:net-im/telepathy-accounts-signon \
		${LOCALBASE}/libexec/mission-control-5:net-im/telepathy-mission-control

USES=		cmake:outsource gettext pkgconfig kde:5 tar:xz
USE_KDE=	config coreaddons ecm iconthemes kcmutils kio notifications \
		notifyconfig people texteditor wallet widgetsaddons windowsystem
USE_QT5=	buildtools_build core network qmake_build qml
USE_LDCONFIG=	yes

.include <bsd.port.mk>
