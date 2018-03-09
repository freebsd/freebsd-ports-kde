# $FreeBSD$

PORTNAME=	signon-plugin-oauth2
DISTVERSION=	0.24
CATEGORIES=	sysutils kde
MASTER_SITES=	https://gitlab.com/${GL_ACCOUNT}/${GL_PROJECT}/repository/VERSION_${DISTVERSION}/ \
		LOCAL/tcberner/${GL_ACCOUNT}/${GL_PROJECT}/${DISTVERSION}/
DISTNAME=	archive
DIST_SUBDIR=	KDE/${GL_ACCOUNT}/${GL_PROJECT}/${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Component for handling accounts-sso user interactions

LIB_DEPENDS=	libsignon-qt5.so:sysutils/signon-qt5

USES=		pkgconfig python qmake
USE_QT5=	core network testlib \
		buildtools_build qmake_build
USE_LDCONFIG=	${PREFIX}/lib/signon

QMAKE_ENV=	PREFIX=${PREFIX}

# gitlab variables
GL_ACCOUNT=	accounts-sso
GL_PROJECT=	${PORTNAME}
GL_TAGNAME=	2dd9ba521a0dd4277c4bf6970a7f4e3894fd85ae
WRKSRC=		${WRKDIR}/${GL_PROJECT}-VERSION_${DISTVERSION}-${GL_TAGNAME}

.include <bsd.port.mk>
