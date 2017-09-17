# $FreeBSD: branches/plasma5/KDE/x11-clocks/ktimer/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	ktimer
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-clocks kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Countdown launcher for KDE

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	dbusaddons doctools ecm i18n iconthemes \
		kio notifications widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui qmake_build widgets

.include <bsd.port.mk>
