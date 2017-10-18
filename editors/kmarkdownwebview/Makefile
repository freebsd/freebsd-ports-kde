# $FreeBSD$

PORTNAME=	kmarkdownwebview
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.0
CATEGORIES=	editors kde
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KPart for rendering Markdown content

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource kde:5
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		ecm i18n jobwidgets kio parts service sonnet textwidgets \
		widgetsaddons xmlgui
USE_QT5=	core dbus gui location network qml quick widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

OPTIONS_SINGLE=	BACKEND
OPTIONS_SINGLE_BACKEND=	WEBKIT WEBENGINE
OPTIONS_DEFAULT=	WEBENGINE
OPTIONS_SUB=	yes

WEBKIT_CMAKE_BOOL=	USE_QTWEBKIT
WEBKIT_USE=	QT5=webkit
WEBENGINE_DESC=	WebEngine webpage renderer support
WEBENGINE_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_Qt5WebEngineWidgets
WEBENGINE_USE=	QT5=webchannel,webengine

USE_GITHUB=	yes
GH_ACCOUNT=	KDE

.include <bsd.port.mk>
