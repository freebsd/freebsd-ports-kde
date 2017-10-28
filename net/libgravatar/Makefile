# $FreeBSD: branches/plasma5/KDE/net/libgravatar/Makefile 13916 2017-04-20 18:30:09Z tcberner $

PORTNAME=	libgravatar
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for gravatar support

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	config ecm i18n widgetsaddons
# pim components
USE_KDE+=	pimcommon
USE_QT5=	buildtools_build gui network qmake_build testlib widgets
USE_LDCONFIG=	yes


.include <bsd.port.mk>
