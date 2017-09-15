# $FreeBSD: branches/plasma5/KDE/net/akonadi-notes/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	akonadi-notes
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for accessing mail storages in MBox format

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm i18n
# pim components
USE_KDE+=	akonadi mime
USE_QT5=	buildtools_build qmake_build xml
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
