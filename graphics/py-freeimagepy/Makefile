PORTNAME=	freeimagepy
PORTVERSION=	2.0.1
PORTREVISION=	2
CATEGORIES=	graphics python
MASTER_SITES=	SF/${PORTNAME}/FreeImagePy/V${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	FreeImagePy_w_dll-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	FreeImage library python wrapper
WWW=		http://freeimagepy.sf.net/

LIB_DEPENDS=	libfreeimage.so:graphics/freeimage

WRKSRC=		${WRKDIR}/FreeImagePy-${PORTVERSION}
USES=		python shebangfix tar:bzip2
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes
SHEBANG_FILES=	FreeImagePy/*.py

.include <bsd.port.mk>
