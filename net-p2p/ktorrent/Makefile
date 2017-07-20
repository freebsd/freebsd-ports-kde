# $FreeBSD: branches/plasma5/PORTS/net-p2p/ktorrent/Makefile 13833 2017-04-09 15:07:57Z tcberner $

PORTNAME=	ktorrent
DISTVERSION=	5.0.1.20170719
CATEGORIES=	net-p2p kde
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	BitTorrent client for KDE

LIB_DEPENDS=	libKF5Syndication.so:net/syndication \
		libKF5Torrent.so:net-p2p/libktorrent \
		libgcrypt.so:security/libgcrypt \
		libgmp.so:math/gmp \
		libtag.so:audio/taglib

USES=		cmake:outsource desktop-file-utils gettext kde:5
USE_KDE=	archive auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons dnssd ecm guiaddons i18n \
		iconthemes itemviews jobwidgets kcmutils kdelibs4support \
		kdewebkit kio kross notifications notifyconfig parts \
		plasma-workspace plotting service solid sonnet textwidgets \
		unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network phonon4 printsupport script webkit \
		widgets xml \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	f198200

.include <bsd.port.mk>
