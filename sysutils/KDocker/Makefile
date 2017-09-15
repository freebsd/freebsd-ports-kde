# $FreeBSD$

PORTNAME=	KDocker
DISTVERSION=	5.0
CATEGORIES=	sysutils

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDocker will help you dock any application into the system tray

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		qmake:outsource localbase:ldflags
USE_QT5=	core gui network widgets x11extras \
		buildtools_build qmake_build
USE_XORG=	x11 xmu xpm

USE_GITHUB=	yes
GH_ACCOUNT=	user-none
GH_TAGNAME=	65a5dd0

.include <bsd.port.mk>
