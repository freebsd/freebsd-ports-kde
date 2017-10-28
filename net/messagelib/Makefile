# $FreeBSD: branches/plasma5/KDE/net/messagelib/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	messagelib
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for handling messages

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	archive codecs completion config ecm i18n iconthemes \
		itemviews kdewebkit xmlgui
# pim components
USE_KDE+=	akonadi akonadisearch contacts grantleetheme gravatar \
		identitymanagement kdepim-apps-libs  ldap \
		libkdepim libkleo mailtransport mbox
USE_QT5=	buildtools_build gui network qmake_build testlib uitools \
		webengine widgets
USE_LDCONFIG=	yes


OPTIONS_DEFINE=		INOTIFY
OPTIONS_DEFAULT=	INOTIFY
OPTIONS_SUB=		yes

INOTIFY_DESC=		Filesystem alteration notifications using inotify
INOTIFY_LIB_DEPENDS=	libinotify.so:devel/libinotify

.include <bsd.port.mk>
