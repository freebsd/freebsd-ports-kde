# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libkdcraw
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PKGNAMESUFFIX=	-kde4
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	LibRaw interface for KDE

LIB_DEPENDS=	liblcms.so:graphics/lcms \
		libxml2.so:textproc/libxml2 \
		libraw.so:graphics/libraw

CMAKE_ARGS+=	-DWITH_OpenMP:BOOL=False \
		-DENABLE_RAWSPEED=True

USES=		cmake:outsource jpeg kde:4 pathfix pkgconfig tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	corelib gui moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

pre-configure:
	${REINPLACE_CMD} -e 's/${PORTNAME}.pc\([^.]\)/${PORTNAME}-kde4.pc\1/g' \
		${WRKSRC}/libkdcraw/CMakeLists.txt

.include <bsd.port.mk>
