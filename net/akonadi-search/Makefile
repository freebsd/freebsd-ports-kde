# $FreeBSD: branches/plasma5/KDE/net/akonadi-search/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	akonadi-search
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries and daemons to implement searching in Akonadi

LICENSE=	LGPL21

LIB_DEPENDS=	libxapian.so:databases/xapian-core

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	config crash ecm i18n kcmutils runner
# pim components
USE_KDE+=	akonadi akonadimime calendarcore contacts  mime
USE_QT5=	buildtools_build core gui qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
