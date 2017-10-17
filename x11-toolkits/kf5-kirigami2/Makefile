# $FreeBSD: branches/plasma5/KDE/x11-toolkits/kirigami2/Makefile 13982 2017-04-29 21:31:21Z tcberner $

PORTNAME=	kirigami2
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	QtQuick based components set

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm kdeclarative plasma-framework
USE_QT5=	buildtools_build core gui linguisttools network qmake_build \
		qml quick quickcontrols2 svg testlib widgets

.include <bsd.port.mk>
