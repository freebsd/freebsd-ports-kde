# $FreeBSD$

PORTNAME=	wacomtablet
DISTVERSION=	3.1.1
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Wacom support

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	xf86-input-libinput>0:x11-drivers/xf86-input-libinput \
		xf86-input-wacom>0:x11-drivers/xf86-input-wacom
RUN_DEPENDS=	xf86-input-libinput>0:x11-drivers/xf86-input-libinput\
		xf86-input-wacom>0:x11-drivers/xf86-input-wacom
LIB_DEPENDS=	libwacom.so:x11/libwacom

USES=		cmake gettext kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons dbusaddons \
		ecm globalaccel i18n notifications package service \
		widgetsaddons windowsystem xmlgui plasma-framework
USE_QT=		core dbus gui widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	ice sm x11 xcb xext xi

DOCSDIR=	${PREFIX}/share/doc

.include <bsd.port.mk>
