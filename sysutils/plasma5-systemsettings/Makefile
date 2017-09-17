# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-systemsettings/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	systemsettings
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 system settings

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	activities-stats auth codecs completion config configwidgets \
		coreaddons dbusaddons doctools ecm i18n iconthemes itemviews \
		jobwidgets js kcmutils khtml kio kirigami2 parts service sonnet \
		textwidgets widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network qmake_build widgets xml

.include <bsd.port.mk>

