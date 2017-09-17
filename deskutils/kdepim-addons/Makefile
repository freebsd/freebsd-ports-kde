# $FreeBSD: branches/plasma5/KDE/deskutils/kdepim-addons/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	kdepim-addons
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE PIM addons

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 \
		pkgconfig tar:xz
USE_KDE=	config dbusaddons ecm i18n khtml xmlgui
# pim components
USE_KDE+=	akonadi akonadinotes calendarsupport eventviews gapi grantleetheme \
		gravatar incidenceeditor kdepim-apps-libs  \
		libkdepim libkleo libksieve mailcommon messagelib pimcommon tnef
USE_QT5=	buildtools_build gui qmake_build testlib webkit widgets
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr



.include <bsd.port.mk>
