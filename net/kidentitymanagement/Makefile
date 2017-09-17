# $FreeBSD: branches/plasma5/KDE/net/kidentitymanagement/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kidentitymanagement
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE pim identities

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm emoticons init itemmodels itemviews kdelibs4support
# pim components
USE_KDE+=	pimtextedit
USE_QT5=	buildtools_build gui qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
