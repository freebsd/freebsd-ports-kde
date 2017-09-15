# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libkipi
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PKGNAMESUFFIX=	-kde4
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Image Plugin Interface

USES=		cmake:outsource kde:4 pathfix tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	gui moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

pre-configure:
	${REINPLACE_CMD} -e 's/${PORTNAME}.pc\([^.]\)/${PORTNAME}-kde4.pc\1/g' \
		${WRKSRC}/libkipi/CMakeLists.txt
# do not conflict with graphic/libkipi
	${REINPLACE_CMD} -e '/KDE4_INSTALL_ICONS/ d' \
		${WRKSRC}/pics/CMakeLists.txt
# remove BOM:
	${REINPLACE_CMD} -e '1 s|^.*/|/|g' \
		${WRKSRC}/tests/kipitestmainwindow.cpp

.include <bsd.port.mk>
