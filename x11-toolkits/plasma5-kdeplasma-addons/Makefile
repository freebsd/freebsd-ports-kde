# $FreeBSD: branches/plasma5/KDE/x11-toolkits/plasma5-kdeplasma-addons/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kdeplasma-addons
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-toolkits kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 addons to improve the Plasma experience

USES=		cmake:outsource compiler:c++11-lib cpe gettext \
		kde:5 pkgconfig tar:xz
USE_KDE=	activities archive attica auth bookmarks codecs completion \
		config configwidgets coreaddons crash ecm emoticons guiaddons \
		i18n iconthemes init itemmodels itemviews jobwidgets kcmutils \
		kdelibs4support kio kross newstuff notifications package parts\
		plasma-framework plasma-workspace runner service solid sonnet \
		textwidgets unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus graphicaleffects gui network \
		printsupport qmake_build qml quick script widgets x11extras xml

.include <bsd.port.mk>
