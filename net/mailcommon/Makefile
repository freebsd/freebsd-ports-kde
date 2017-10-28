# $FreeBSD: branches/plasma5/KDE/net/mailcommon/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	mailcommon
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Common libriares for KDEPim

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	archive codecs ecm i18n iconthemes itemviews windowsystem \
		xmlgui
# pim components
USE_KDE+=	akonadi  ldap libkdepim mailimporter \
		mailtransport messagelib mime pimcommon
USE_QT5=	buildtools_build designer gui phonon4 qmake_build testlib \
                uiplugin uitools webkit widgets
USE_LDCONFIG=	yes


.include <bsd.port.mk>
