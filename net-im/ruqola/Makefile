PORTNAME=	ruqola
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.1
PORTREVISION=	1
CATEGORIES=	net-im kde

PATCH_SITES=	https://invent.kde.org/network/ruqola/-/commit/
PATCHFILES=	1c9e8072fcb6cdbc1b3f2201eba902706f917b58.diff:-p1

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Rocketchat client

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libqt5keychain.so:security/qtkeychain \
		libsecret-1.so:security/libsecret

USES=		cmake compiler:c++11-lang gnome kde:5 localbase:ldflags qt:5
USE_GNOME=	glib20
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		dbusaddons i18n iconthemes itemviews jobwidgets kio kirigami2 \
		notifications notifyconfig service solid sonnet syntaxhighlighting \
		textwidgets widgetsaddons windowsystem xmlgui \
		doctools_build ecm_build
USE_QT=		concurrent core dbus declarative declarative gui multimedia \
		network networkauth speech xml websockets widgets \
		buildtools_build qmake_build testlib_build

KDE_INVENT=	e90f37a7a3d63f4c1bb8be83e438054f6addf606 network

PLIST_SUB=	SO_VER=${DISTVERSION}

.include <bsd.port.mk>
