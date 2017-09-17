# $FreeBSD: branches/plasma5/KDE/deskutils/libkdepim/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	libkdepim
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE PIM Libraries

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs

USES=		cmake:outsource gettext compiler:c++11-lib kde:5 tar:xz
USE_KDE=	codecs completion ecm i18n iconthemes itemviews kcmutils \
		wallet
# pim components
USE_KDE+=	akonadi akonadicontacts akonadisearch contacts  ldap mime
USE_QT5=	buildtools_build dbus designer gui network qmake_build testlib \
		uiplugin uitools widgets

USE_LDCONFIG=	yes


.include <bsd.port.mk>
