# $FreeBSD: branches/plasma5/KDE/sysutils/kdebugsettings-kf5/Makefile 13710 2017-03-08 18:32:37Z tcberner $

PORTNAME=	kdebugsettings
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE application to enable/disable qCDebug

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons dbusaddons \
		ecm guiaddons i18n iconthemes itemviews kio widgetsaddons
USE_QT5=	buildtools_build core gui qmake_build testlib widgets

.include <bsd.port.mk>
