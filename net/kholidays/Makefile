# $FreeBSD: branches/plasma5/KDE/net/kholidays/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kholidays
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for calendar holidays

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm emoticons kdelibs4support init itemmodels itemviews
USE_QT5=	buildtools_build core gui qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
