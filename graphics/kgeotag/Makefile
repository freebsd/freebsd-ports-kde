PORTNAME=	kgeotag
DISTVERSION=	1.7.0
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Photo geotagging manually or from GPX files
WWW=		https://invent.kde.org/graphics/kgeotag/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSES/LicenseRef-KDE-Accepted-GPL.txt

USES=		cmake compiler:c++17-lang kde:6 pkgconfig qt:6 tar:xz
USE_QT=		5compat base positioning
USE_KDE=	coreaddons colorscheme config configwidgets crash i18n \
		libkexiv2 marble xmlgui \
		ecm:build
# From stage-qa; these are not checked explicitly, but link
# transitively though other KDE components (mostly Marble).
USE_QT+=	declarative location webchannel
USE_KDE+=	auth codecs widgetsaddons

CMAKE_ON=	BUILD_WITH_QT6

.include <bsd.port.options.mk>

.if ${ARCH} == aarch64 || ${ARCH} == amd64 || ${ARCH} == i386
USE_QT+=	webengine
.endif

.include <bsd.port.mk>
