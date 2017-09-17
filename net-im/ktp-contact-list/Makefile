# $FreeBSD: branches/plasma5/KDE/net-im/ktp-contact-list/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-contact-list
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging contact list application

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libtelepathy-logger-qt.so:net-im/telepathy-logger-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	dbusaddons ecm i18n iconthemes kcmutils kio notifications \
		notifyconfig people windowsystem xmlgui
USE_QT5=	buildtools_build core gui qmake_build widgets xml

.include <bsd.port.mk>
