# $FreeBSD: branches/plasma5/KDE/net-im/ktp-filetransfer-handler/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-filetransfer-handler
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging file transfer handler

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config coreaddons ecm i18n kio
USE_QT5=	buildtools_build core dbus qmake_build widgets

.include <bsd.port.mk>
