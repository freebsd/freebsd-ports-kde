# $FreeBSD: branches/plasma5/KDE/net/kblog/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kblog
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE API for weblogging access

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	coreaddons ecm kdelibs4support kio xmlrpcclient
# pim components
USE_KDE+=	calendarcore syndication
USE_QT5=	buildtools_build gui qmake_build webkit
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
