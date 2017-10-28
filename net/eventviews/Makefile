# $FreeBSD: branches/plasma5/KDE/net/eventviews/Makefile 13916 2017-04-20 18:30:09Z tcberner $

PORTNAME=	eventviews
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Event view libriares for KDEPim

LICENSE=	LGPL21

LIB_DEPENDS=	libKGantt.so:graphics/kdiagram  \
		libboost_system.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	codecs ecm i18n
# pim components
USE_KDE+=	akonadi akonadicalendar calendarcore calendarsupport \
		calendarutils identitymanagement libkdepim mime
USE_QT5=	buildtools_build gui qmake_build testlib uitools widgets
USE_LDCONFIG=	yes


.include <bsd.port.mk>
