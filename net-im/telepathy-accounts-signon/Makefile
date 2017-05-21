# Created by: Tobias C. Berner <tcberner@gmail.com>
# $FreeBSD: branches/plasma5/PORTS/net-im/telepathy-accounts-signon/Makefile 12902 2016-08-07 09:43:14Z tcberner $

PORTNAME=	${GL_PROJECT}
PORTVERSION=	1.0
CATEGORIES=	net-im
MASTER_SITES=	https://gitlab.com/${GL_ACCOUNT}/${GL_PROJECT}/repository/archive${EXTRACT_SUFX}?ref=${GL_TAGNAME}&num;/
DIST_SUBDIR=	KDE/${GL_ACCOUNT}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Telepathy libaccounts and libsignon plugin

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LGPL

LIB_DEPENDS=	libaccounts-glib.so:net-im/libaccounts-glib \
		libmission-control-plugins.so:net-im/telepathy-mission-control \
		libsignon-glib.so:net-im/libsignon-glib

USES=		gettext pkgconfig qmake tar:bz2
USE_QT5=	buildtools_build core qmake_build

USE_LDCONFIG=	YES

# gitlab variables
GL_ACCOUNT=	accounts-sso
GL_PROJECT=	telepathy-accounts-signon
GL_TAGNAME=	f01a6d9eccad24a3cb4a5300fb0ae0fd426cc815
WRKSRC=		${WRKDIR}/${GL_PROJECT}-${GL_TAGNAME}-${GL_TAGNAME}

PLIST_FILES=	lib/mission-control-plugins.0/mcp-account-manager-accounts-sso.so

.include <bsd.port.mk>
