# $FreeBSD$

PORTNAME=	kipiplugins
DISTVERSION=	5.7.0
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/digikam
DIST_SUBDIR=	KDE/digikam/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plugins for digikam

LIB_DEPENDS=	libdigikamcore.so:graphics/digikam

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig \
		tar:xz
USE_KDE=	archive auth bookmarks codecs completion config configwidgets \
		coreaddons ecm itemviews jobwidgets kio libkipi service solid \
		widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network printsupport widgets xml xmlpatterns \
		buildtools_build qmake_build

CMAKE_ARGS=	-DDIGIKAMSC_COMPILE_DIGIKAM:BOOL=OFF \
		-DDIGIKAMSC_COMPILE_KIPIPLUGINS:BOOL=ON \
 		-DDIGIKAMSC_COMPILE_DOC:BOOL=OFF \
 		-DDIGIKAMSC_COMPILE_PO:BOOL=OFF

OPTIONS_DEFINE=		MEDIAWIKI KVKONTAKTE
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}
OPTIONS_SUB=		yes

MEDIAWIKI_DESC=		MediaWiki Plugin
MEDIAWIKI_CMAKE_BOOL=	DIGIKAMSC_COMPILE_LIBMEDIAWIKI
MEDIAWIKI_LIB_DEPENDS=	libKF5MediaWiki.so:net/libmediawiki

KVKONTAKTE_DESC=	vk.com Plugin
KVKONTAKTE_CMAKE_BOOL=	DIGIKAMSC_COMPILE_LIBKVKONTAKTE
KVKONTAKTE_LIB_DEPENDS=	libKF5Vkontakte.so:net/libkvkontakte

DISTNAME=	digikam-${PORTVERSION}
DISTINFO_FILE=	${.CURDIR:H:H}/graphics/digikam/distinfo
DESCR=		${.CURDIR:H:H}/graphics/digikam/pkg-descr

.include <bsd.port.mk>
