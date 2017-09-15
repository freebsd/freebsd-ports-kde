# $FreeBSD: branches/plasma5/KDE/devel/plasma5-kwrited/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kwrited
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	devel kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 daemon listening for wall and write messages

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	coreaddons dbusaddons ecm i18n notifications pty
USE_QT5=	buildtools_build core dbus gui qmake_build widgets

.include <bsd.port.mk>
