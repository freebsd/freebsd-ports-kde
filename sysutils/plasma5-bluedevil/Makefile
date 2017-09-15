# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-bluedevil/Makefile 13250 2016-11-06 16:34:10Z tcberner $

# Note: this probably does not work yet (TOOD: find out if bluez-qt works on
#       on FreeBSD or what is needed to make it work).

PORTNAME=	bluedevil
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 integration for Bluetooth devices

USES=		cmake:outsource compiler:c++11-lib cpe \
		gettext kde:5 shared-mime-info tar:xz
USE_KDE=	auth bluez-qt bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons ecm i18n \
		iconthemes itemviews jobwidgets kded kio \
		notifications plasma-framework service solid \
		widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network \
		qmake_build qml widgets xml

.include <bsd.port.mk>

