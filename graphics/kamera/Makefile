# $FreeBSD$

PORTNAME=	kamera
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Digital camera manager for KDE

LIB_DEPENDS=	libgphoto2.so:graphics/libgphoto2

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets doctools ecm i18n kio xmlgui
USE_QT5=	buildtools_build core gui qmake_build

.include <bsd.port.mk>
