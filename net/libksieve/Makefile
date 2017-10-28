# $FreeBSD: branches/plasma5/KDE/net/libksieve/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	libksieve
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Sieve libriares for KDEPim

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	archive ecm i18n iconthemes newstuff windowsystem
# pim components
USE_KDE+=	akonadi identitymanagement libkdepim mailtransport mime \
		pimcommon pimtextedit
USE_QT5=	buildtools_build gui qmake_build testlib uitools webengine \
                widgets xml
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
