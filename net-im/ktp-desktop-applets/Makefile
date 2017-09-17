# $FreeBSD: branches/plasma5/KDE/net-im/ktp-desktop-applets/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-desktop-applets
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging plasma widgets

LIB_DEPENDS=	libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm plasma-framework windowsystem
USE_QT5=	buildtools_build core qmake_build

.include <bsd.port.mk>
