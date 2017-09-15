# $FreeBSD$

PORTNAME=	choqok
DISTVERSION=	1.6.0
PORTREVISION=	1
CATEGORIES=	www kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}/src
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE micro-blogging client

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libqjson-qt5.so:devel/qjson-qt5 \
		libqca-qt5.so:devel/qca-qt5 \
		libqoauth-qt5.so:net/qoauth-qt5 \
		libtelepathy-qt5.so:net-im/telepathy-qt5

CONFLICTS_INSTALL=	${PORTNAME}-1.5*

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig tar:xz
USE_KDE=	attica auth bookmarks codecs completion config configwidgets \
		coreaddons doctools ecm emoticons globalaccel guiaddons i18n \
		itemviews jobwidgets kcmutils kdewebkit kio notifications \
		notifyconfig parts service solid sonnet textwidgets wallet \
		widgetsaddons xmlgui \
		kded_run
USE_QT5=	buildtools_build core dbus gui network qmake_build \
		widgets xml

USE_LDCONFIG=	yes

.include <bsd.port.mk>
