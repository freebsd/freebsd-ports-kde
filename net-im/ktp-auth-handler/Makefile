# $FreeBSD: branches/plasma5/KDE/net-im/ktp-auth-handler/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-auth-handler
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KWallet integration module for KDE Telepathy

LIB_DEPENDS=	libqca-qt5.so:devel/qca-qt5 \
		libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals  \
		libaccounts-qt5.so:net-im/libaccounts-qt5 \
		libkaccounts.so:net-im/kaccounts-integration

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_KDE=	ecm i18n kdewebkit kio wallet widgetsaddons
USE_QT5=	buildtools_build core dbus gui network qmake_build webkit

.include <bsd.port.mk>
