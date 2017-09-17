# $FreeBSD: branches/plasma5/KDE/deskutils/keditbookmarks-kf5/Makefile 13483 2016-12-17 10:00:12Z tcberner $

PORTNAME=	keditbookmarks
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Bookmark Organizer and Editor

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons ecm i18n iconthemes jobwidgets kio parts service \
		sonnet textwidgets widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
