# Created by: Markus Brueffer <brueffer@phoenix-systems.de>
# $FreeBSD$

PORTNAME=	kphotoalbum
DISTVERSION=	5.2
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Image viewer and organizer for KDE

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libKF5KGeoMap.so:astro/libkgeomap \
		libexiv2.so:graphics/exiv2

USES=		cmake:outsource jpeg kde:5 localbase:ldflags pkgconfig \
		shebangfix tar:xz
USE_KDE=	archive auth codecs completion config configwidgets coreaddons \
		ecm i18n iconthemes jobwidgets kio service sonnet textwidgets \
		widgetsaddons xmlgui \
		libkdcraw libkipi
USE_QT5=	core dbus gui network phonon4 sql webkit widgets xml \
		buildtools_build qmake_build
SHEBANG_FILES=	script/open-raw.pl script/kpa-backup.sh

OPTIONS_DEFINE=	MARBLE NLS
OPTIONS_DEFAULT=MARBLE
OPTIONS_SUB=	yes

MARBLE_DESC=	Geolocation support
MARBLE_USE=	KDE=marble
MARBLE_CMAKE_BOOL=	WITH_Marble

NLS_USES=	gettext
NLS_CMAKE_BOOL=	BUILD_po

.include <bsd.port.mk>
