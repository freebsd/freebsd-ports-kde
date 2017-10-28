# $FreeBSD: branches/plasma5/KDE/games/libkdegames-kf5/Makefile 13697 2017-03-08 17:43:58Z tcberner $

PORTNAME=	libkdegames
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries used by KDE games

LIB_DEPENDS=	libsndfile.so:audio/libsndfile

USES=		cmake:outsource gettext kde:5 openal tar:xz
USE_KDE=	archive bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons dnssd ecm emoticons globalaccel \
		guiaddons i18n iconthemes init itemmodels itemviews \
		jobwidgets kdeclarative kdelibs4support kio newstuff \
		service textwidgets widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui network qmake_build qml quick \
		svg testlib widgets
USE_LDCONFIG=	yes

SHLIB_VER=	7.0.0
PLIST_SUB+=	SHLIB_VER="${SHLIB_VER}" \
		SHLIB_SHVER="${SHLIB_VER:R:R}"

.include <bsd.port.mk>
