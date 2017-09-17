# $FreeBSD$

PORTNAME=	drkonqi
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 crash handler

USES=		cmake:outsource kde:5 pkgconfig tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		 crash i18n idletime jobwidgets kio notifications \
		service wallet widgetsaddons xmlrpcclient
USE_QT5=	core dbus gui widgets x11extras xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
