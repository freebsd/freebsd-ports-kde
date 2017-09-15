# $FreeBSD: head/x11/kactivities/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	kactivities
DISTVERSION=	${KDE4_ACTIVITIES_VERSION}
PORTREVISION=	4
CATEGORIES=	x11 kde
MASTER_SITES=	KDE/Attic/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Kactivities library

USES=		cmake:outsource compiler:c++11-lib kde:4 pathfix tar:xz
USE_KDE=	automoc4 kdelibs soprano nepomuk-core
USE_QT4=	declarative moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

post-patch:
# Disable kactivitymanagerd
	${REINPLACE_CMD} -e "/add_subdirectory (service)/d" \
		-e "/add_subdirectory (workspace)/d" \
		${WRKSRC}/src/CMakeLists.txt \

.include <bsd.port.mk>
