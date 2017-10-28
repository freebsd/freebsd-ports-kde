# $FreeBSD: branches/plasma5/KDE/deskutils/kdepim-runtime/Makefile 13964 2017-04-26 16:37:19Z tcberner $

PORTNAME=	kdepim-runtime
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE PIM tools and services

LICENSE=	LGPL21

LIB_DEPENDS=	libkolab.so:devel/libkolab

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	codecs config itemmodels kcmutils kdelibs4support kio kross \
		notifyconfig
# pim components
USE_KDE+=	akonadinotes akonadicalendar akonadisearch alarmcalendar \
		calendarcore calendarutils gapi identitymanagement imap \
		kontactinterface kpimdav mailtransport mbox pimcommon \
		pimtextedit syndication
USE_QT5=	buildtools_build core gui network qmake_build \
		script webkit widgets xmlpatterns

USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr



.include <bsd.port.mk>
