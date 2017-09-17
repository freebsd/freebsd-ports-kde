# $FreeBSD: branches/plasma5/KDE/net-im/ktp-accounts-kcm/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-accounts-kcm
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging account management module

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libtelepathy-logger-qt.so:net-im/telepathy-logger-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals \
		libKF5AkonadiPrivate.so:databases/akonadi \
		libsignon-qt5.so:sysutils/signon-qt5

RUN_DEPENDS=	${KDE_PREFIX}/bin/ktp-contactlist:net-im/ktp-contact-list  \
		${QT_PLUGINDIR}/kaccounts/ui/owncloud_plugin_kaccounts.so:net-im/kaccounts-providers

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_GNOME=	intltool
USE_KDE=	config coreaddons ecm iconthemes kcmutils kio notifications \
		notifyconfig texteditor wallet widgetsaddons windowsystem
USE_QT5=	buildtools_build core qmake_build qml sql
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	HAZE IRC JABBER SALUT
OPTIONS_DEFAULT=JABBER

HAZE_DESC=	libpurple protocols support
HAZE_RUN_DEPENDS=	${LOCALBASE}/libexec/telepathy-haze:net-im/telepathy-haze

IRC_DESC=	Internet Relay Chat support
IRC_RUN_DEPENDS=	${LOCALBASE}/libexec/telepathy-idle:net-im/telepathy-idle

JABBER_RUN_DEPENDS=	${LOCALBASE}/libexec/telepathy-gabble:net-im/telepathy-gabble

SALUT_DESC=	Link-local (serverless) XMPP support
SALUT_RUN_DEPENDS=	${LOCALBASE}/libexec/telepathy-salut:net-im/telepathy-salut

.include <bsd.port.mk>
