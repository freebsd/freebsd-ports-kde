# $FreeBSD: branches/plasma5/KDE/x11/plasma5-kgamma5/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kgamma5
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 monitor's gamma settings

USES=		cmake:outsource cpe gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash doctools ecm emoticons guiaddons i18n \
		iconthemes init itemmodels itemviews jobwidgets \
		kdelibs4support kio notifications parts service solid sonnet \
		textwidgets unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network printsupport \
		qmake_build widgets x11extras xml
USE_XORG=	ice sm x11 xext xxf86vm

.include <bsd.port.mk>
