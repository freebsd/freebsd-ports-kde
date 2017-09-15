# $FreeBSD: branches/plasma5/KDE/net/kio-gdrive/Makefile 13968 2017-04-26 17:59:10Z tcberner $

PORTNAME=	kio-gdrive
DISTVERSION=	1.1.1
CATEGORIES=	net kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE IOSlave for accessing gdrive

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libqt5keychain.so:security/qtkeychain-qt5

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config coreaddons ecm i18n jobwidgets kio service \
		widgetsaddons \
		gapi
USE_QT5=	core dbus gui network widgets \
		buildtools_build  qmake_build

.include <bsd.port.mk>
