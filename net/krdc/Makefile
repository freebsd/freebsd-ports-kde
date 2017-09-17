# $FreeBSD: branches/plasma5/KDE/net/krdc/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	krdc
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	RDP and VNC client for KDE

LIB_DEPENDS=	libvncserver.so:net/libvncserver

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	bookmarks completion config dnssd doctools ecm i18n iconthemes \
		kcmutils notifications notifyconfig wallet widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui qmake_build
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	FREERDP
OPTIONS_SUB=	yes
FREERDP_CMAKE_BOOL=	WITH_FREERDP
FREERDP_DESC=	Remote Desktop support via FreeRDP
FREERDP_BUILD_DEPENDS=	xfreerdp:net/freerdp
FREERDP_RUN_DEPENDS=	xfreerdp:net/freerdp

.include <bsd.port.mk>
