# $FreeBSD: branches/plasma5/KDE/net/kcalutils/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kcalutils
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE utility and user interface functions for accessing calendar

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext grantlee:5 kde:5 tar:xz
USE_KDE=	codecs config coreaddons ecm i18n kdelibs4support
# pim components
USE_KDE+=	calendarcore identitymanagement
USE_QT5=	buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
