# $FreeBSD: branches/plasma5/KDE/net/kcontacts/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kcontacts
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE api to manage contact information

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm codecs config coreaddons i18n
USE_QT5=	buildtools_build core dbus gui qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
