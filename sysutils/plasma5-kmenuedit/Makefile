# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-kmenuedit/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kmenuedit
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 menu editor

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons guiaddons ecm emoticons hotkeys \
		i18n iconthemes init itemmodels itemviews jobwidgets \
		kdelibs4support kio notifications parts service solid sonnet \
		textwidgets unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network printsupport \
		qmake_build widgets xml

.include <bsd.port.mk>
