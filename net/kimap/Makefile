# $FreeBSD: branches/plasma5/KDE/net/kimap/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kimap
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE API for IMAP support

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libsasl2.so:security/cyrus-sasl2

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	coreaddons ecm kdelibs4support
# pim components
USE_KDE+=	mime
USE_QT5=	buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
