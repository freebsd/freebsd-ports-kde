# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/multimedia/dragon/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	dragon
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	multimedia kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE multimedia player with a focus on simplicity

LICENSE=	GPLv2

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons dbusaddons doctools ecm \
		i18n iconthemes jobwidgets notifications parts solid \
		widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build phonon4 qmake_build

.include <bsd.port.mk>
