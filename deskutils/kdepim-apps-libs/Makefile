# $FreeBSD: branches/plasma5/KDE/deskutils/kdepim-apps-libs/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	kdepim-apps-libs
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE PIM mail related libraries

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	completion config coreaddons dbusaddons ecm i18n iconthemes \
		kdewebkit service sonnet widgetsaddons xmlgui
# pim components
USE_KDE+=	akonadi contacts grantleetheme  libkleo mime \
		pimcommon pimtextedit
USE_QT5=	dbus gui testlib uitools webkit widgets \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr



.include <bsd.port.mk>
