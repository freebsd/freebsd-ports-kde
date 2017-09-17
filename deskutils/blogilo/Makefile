# $FreeBSD: branches/plasma5/KDE/deskutils/blogilo/Makefile 13965 2017-04-26 16:54:48Z tcberner $

PORTNAME=	blogilo
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	A KDE blogging client

LICENSE=	LGPL21

LIB_DEPENDS=	libical.so:devel/libical

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons guiaddons ecm i18n iconthemes \
		itemviews jobwidgets kdelibs4support kio notifications parts \
		service solid sonnet syntaxhighlighting texteditor textwidgets \
		unitconversion wallet widgetsaddons windowsystem xmlgui
# pim components
USE_KDE+=	blog calendarcore gapi libkdepim pimcommon pimtextedit syndication messagelib
USE_QT5=	core dbus gui location network printsupport qml quick sql \
		webchannel webengine widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

KDE_APPLICATIONS_SHLIB_VER=	5.6.0

.include <bsd.port.mk>
