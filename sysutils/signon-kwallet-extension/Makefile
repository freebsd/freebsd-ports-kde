# $FreeBSD: branches/plasma5/KDE/sysutils/signon-kwallet-extension-kf5/Makefile 13710 2017-03-08 18:32:37Z tcberner $

PORTNAME=	signon-kwallet-extension
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KWallet integration for signon framework

LIB_DEPENDS=	libsignon-qt5.so:sysutils/signon-qt5

USES=		cmake:outsource kde:5 pkgconfig tar:xz
USE_KDE=	ecm wallet
USE_QT5=	buildtools_build core dbus qmake_build
USE_LDCONFIG=	${KDE_PREFIX}/${SE_DIR}
PLIST_FILES=	${SE_DIR}/libkeyring-kwallet.so
SE_DIR=		lib/signon/extensions

.include <bsd.port.mk>
