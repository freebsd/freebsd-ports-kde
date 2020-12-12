# $FreeBSD$

PORTNAME=	5compat
DISTVERSION=	${QT6_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt6-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 6 module that contains unsupported Qt 5 APIs

USES=		cmake compiler:c++17-lang \
		qt-dist:6
USE_QT=		base
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
