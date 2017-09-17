# $FreeBSD: branches/plasma5/KDE/net/akonadi-mime/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	akonadi-mime
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries and daemons to implement basic email handling

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm dbusaddons kio
# pim components
USE_KDE+=	akonadi mime
USE_QT5=	buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
