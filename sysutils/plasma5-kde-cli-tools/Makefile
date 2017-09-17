# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-kde-cli-tools/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kde-cli-tools
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 tools interact with the system.

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	activities auth bookmarks codecs completion config configwidgets \
		coreaddons crash ecm emoticons guiaddons i18n iconthemes init \
		itemmodels itemviews jobwidgets kcmutils kdelibs4support kdesu \
		kio notifications parts pty service solid sonnet textwidgets \
		unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network printsupport qmake_build \
		svg testlib  widgets x11extras xml
USE_XORG=	x11

.include <bsd.port.mk>
