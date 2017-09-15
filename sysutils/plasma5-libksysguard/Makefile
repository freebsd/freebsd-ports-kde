# $FreeBSD: branches/plasma5/KDE/sysutils/plasma5-libksysguard/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	libksysguard
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 library to track and control running processes

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons i18n \
		iconthemes package plasma-framework service widgetsaddons \
		windowsystem
USE_QT5=	buildtools_build core dbus gui network qmake_build \
		script webkit widgets x11extras xml

.include <bsd.port.mk>
