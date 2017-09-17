# $FreeBSD: branches/plasma5/KDE/games/libkmahjongg/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	libkmahjongg
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for the Mahjongg Solitaire for KDE 5

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons ecm i18n widgetsaddons
USE_QT5=	buildtools_build core gui qmake_build svg widgets
USE_LDCONFIG=	yes

.include <bsd.port.mk>
