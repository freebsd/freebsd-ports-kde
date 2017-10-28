# $FreeBSD: branches/plasma5/KDE/devel/libkolab/Makefile 13963 2017-04-26 16:02:39Z tcberner $

PORTNAME=	libkolab
DISTVERSION=	1.0.2
CATEGORIES=	devel kde
MASTER_SITES=	LOCAL/tcberner/${PORTNAME}-${PORTVERSION} \
		http://mirror.kolabsys.com/pub/releases/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Advanced Kolab Object Handling Library

# The code in kolabformatV2 is LGPL21, but we consider the library
# itself to be LGPL3-licensed (and so are all the installed headers).
LICENSE=	LGPL3

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs \
		libcurl.so:ftp/curl \
		libical.so:devel/libical \
		libkolabxml.so:textproc/libkolabxml \
		libxerces-c.so:textproc/xerces-c3

USES=		cmake:outsource kde:5
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash ecm guiaddons i18n iconthemes itemmodels \
		itemviews jobwidgets kdelibs4support kio notifications parts \
		service solid sonnet textwidgets unitconversion widgetsaddons \
		windowsystem xmlgui
# pim components
USE_KDE+=	akonadi akonadinotes calendarcore calendarutils contacts mime
USE_QT5=	core dbus gui network printsupport widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
