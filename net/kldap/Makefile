# $FreeBSD: branches/plasma5/KDE/net/kldap/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kldap
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	LDAP access API for KDE

LICENSE=	LGPL21

LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm completion i18n kio widgetsaddons
# pim components
USE_KDE+=	mbox
USE_QT5=	buildtools_build core gui qmake_build
USE_OPENLDAP=	yes
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
