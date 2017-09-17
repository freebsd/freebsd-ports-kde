# $FreeBSD: branches/plasma5/KDE/net/kmailtransport/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kmailtransport
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library to managing mail transport

LICENSE=	LGPL21

LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm kcmutils kdelibs4support wallet
# pim components
USE_KDE+=	akonadi akonadimime
USE_QT5=	buildtools_build gui qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
