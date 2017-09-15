# $FreeBSD$

PORTNAME=	libkexiv2
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PKGNAMESUFFIX=	-kde4
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Exiv2 library interface for KDE

LIB_DEPENDS=	libexiv2.so:graphics/exiv2

USES=		cmake:outsource kde:4 pathfix tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	corelib gui xml \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

pre-configure:
	${REINPLACE_CMD} -e 's/${PORTNAME}.pc\([^.]\)/${PORTNAME}-kde4.pc\1/g' \
		${WRKSRC}/libkexiv2/CMakeLists.txt

.include <bsd.port.mk>
