# $FreeBSD: branches/plasma5/KDE/net-im/ktp-kded-module/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-kded-module
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Module for integration of instant messaging into KDE Workspaces

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets dbusaddons i18n idletime \
		kcmutils kio notifications widgetsaddons
USE_QT5=	buildtools_build core qmake_build

.include <bsd.port.mk>
