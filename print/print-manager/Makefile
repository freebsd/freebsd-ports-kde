# $FreeBSD: branches/plasma5/KDE/print/print-manager-kf5/Makefile 13707 2017-03-08 18:21:36Z tcberner $

PORTNAME=	print-manager
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	print kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Printer manager for KDE

LIB_DEPENDS=	libcups.so:print/cups

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons dbusaddons ecm i18n iconthemes \
		itemviews kcmutils kio notifications plasma-framework \
		widgetsaddons windowsystem
USE_QT5=	buildtools_build core dbus network qmake_build qml quick widgets

.include <bsd.port.mk>
