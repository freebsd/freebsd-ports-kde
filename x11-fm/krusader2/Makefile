# Created by: Heiner <h.eichmann@gmx.de>
# $FreeBSD: head/x11-fm/krusader2/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	krusader
DISTVERSION=	2.5.0
CATEGORIES=	x11-fm kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/
PKGNAMESUFFIX=	-kf5
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Twin panel file manager for KDE, like midnight or norton commander

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS_INSTALL=	krusader-2.4*

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	activities archive bookmarks codecs completion config \
		coreaddons doctools ecm emoticons filemetadata \
		guiaddons i18n iconthemes init itemviews \
		kio newstuff notifications parts solid \
		texteditor textwidgets widgetsaddons windowsystem \
		xmlgui kio-extras_run
USE_QT5=	buildtools_build concurrent core dbus gui phonon4 \
		qmake_build widgets

.include <bsd.port.mk>
