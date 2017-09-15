# $FreeBSD$

PORTNAME=	plasma5-wallpapers-freebsd
DISTVERSION=	1.0
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://euroquis.nl/doc/
DISTNAME=	${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	FreeBSD wallpapers for Plasma 5 Desktop designed by KDE artwork team

USES=		tar:bzip2

NO_BUILD=	yes

do-install:
	cd ${WRKSRC} && \
		${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}

.include <bsd.port.mk>
