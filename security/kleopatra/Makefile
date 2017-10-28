# $FreeBSD: branches/plasma5/KDE/security/kleopatra-kf5/Makefile 13709 2017-03-08 18:23:47Z tcberner $

PORTNAME=	kleopatra
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	security kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Certificate manager for KDE

LIB_DEPENDS=	libassuan.so:security/libassuan \
		libboost_thread.so:devel/boost-libs \
		libgpgme.so:security/gpgme

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	codecs config dbusaddons doctools ecm i18n iconthemes kcmutils \
		notifications textwidgets windowsystem xmlgui \
		libkleo mime
USE_QT5=	buildtools_build network qmake_build testlib widgets

.include <bsd.port.mk>
