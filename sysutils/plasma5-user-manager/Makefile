# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-user-manager/Makefile 13601 2017-01-16 23:00:36Z tcberner $

PORTNAME=	user-manager
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 user manager

LIB_DEPENDS=	libpwquality.so:security/libpwquality

USES=		cmake:outsource compiler:c++11-lib cpe gettext \
		kde:5 pkgconfig tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash ecm emoticons guiaddons i18n iconthemes \
		init itemmodels itemviews jobwidgets kcmutils kdelibs4support \
		kio notifications parts service solid sonnet textwidgets \
		unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network printsupport \
		qmake_build widgets xml

.include <bsd.port.mk>
