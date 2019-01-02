# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD$

PORTNAME=	qtfm
DISTVERSION=	6.1.5
CATEGORIES=	x11-fm

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small, lightweight file manager based on pure Qt

LIB_DEPENDS=	libinotify.so:devel/libinotify

USES=		desktop-file-utils gl qmake qt:5
USE_GL=		gl
USE_QT=		concurrent core dbus gui widgets \
		buildtools_build qmake_build
USE_GITHUB=	yes
GH_ACCOUNT=	rodlie

QMAKE_ARGS=	PREFIX=${PREFIX} \
		MANDIR=${PREFIX}/man \
		XDGDIR=${PREFIX}/etc/xdg

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
