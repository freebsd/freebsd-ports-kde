# $FreeBSD: branches/plasma5/KDE/net/akonadi-contacts/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	akonadi-contacts
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries and daemons to implement Contact Management in Akonadi
LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext grantlee:5 kde:5 \
		tar:xz
USE_KDE=	codecs completion ecm kio
# pim components
USE_KDE+=	akonadi akonadimime calendarcore contacts mime
USE_QT5=	core gui testlib webengine widgets \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
