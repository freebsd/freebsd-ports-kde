# $FreeBSD$

PORTNAME=	otter-browser
DISTVERSION=	0.9.91
DISTVERSIONPREFIX=	v
CATEGORIES=	www

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Browser based on Qt 5

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libhunspell-1.6.so:textproc/hunspell

USES=		cmake:outsource compiler:c++11-lib desktop-file-utils
USE_QT5=	concurrent core dbus gui multimedia network printsupport \
		qml script sql sql-sqlite3 svg widgets xmlpatterns \
		buildtools_build qmake_build

OPTIONS_SINGLE=		BACKEND
OPTIONS_SINGLE_BACKEND=	WEBKIT WEBENGINE
OPTIONS_DEFAULT=	WEBKIT

WEBKIT_CMAKE_BOOL=	ENABLE_QTWEBKIT
WEBKIT_USE=		QT5=webkit
WEBENGINE_DESC=		WebEngine webpage renderer support
WEBENGINE_CMAKE_BOOL=	ENABLE_QTWEBENGINE
WEBENGINE_USE=		QT5=location,quick,webchannel,webengine

USE_GITHUB=	yes
GH_ACCOUNT=	OtterBrowser

.include <bsd.port.mk>
