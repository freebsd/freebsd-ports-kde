# $FreeBSD: branches/plasma5/KDE/net/calendarsupport/Makefile 13916 2017-04-20 18:30:09Z tcberner $

PORTNAME=	calendarsupport
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Calendar support libriares for KDEPim

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	codecs ecm i18n
# pim components
USE_KDE+=	akonadi akonadicalendar calendarcore calendarutils holidays \
		identitymanagement kdepim-apps-libs  mime \
		pimcommon
USE_QT5=	buildtools_build gui qmake_build testlib uitools widgets
USE_LDCONFIG=	yes


.include <bsd.port.mk>
