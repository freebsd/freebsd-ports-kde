# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>

PORTNAME=	zint
PORTVERSION=	2.9.0
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Zint Barcode Generator

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpng.so:graphics/png

USES=		cmake compiler:c++11-lang qt:5
USE_LDCONFIG=	yes
USE_QT=		buildtools_build qmake_build uitools_build core gui widgets

DESKTOP_ENTRIES="Zint" "Barcode generator" "" "zint-qt" "" false

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}.src

.include <bsd.port.mk>
