# Created by: Koop Mast <kwm@FreeBSD.org>
#   $MCom: ports/trunk/textproc/itstool/Makefile 19804 2014-08-13 14:55:11Z kwm $

PORTNAME=	itstool
PORTVERSION=	2.0.6
CATEGORIES=	textproc
MASTER_SITES=	http://files.itstool.org/itstool/

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Make XML documents translatable through po files

LICENSE=	GPLv3

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:textproc/py-libxml2@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:textproc/py-libxml2@${PY_FLAVOR}

USES=		python tar:bzip2
GNU_CONFIGURE=	yes

CONFLICTS_INSTALL=	itstool22

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|@PYTHON@|${PYTHON_CMD}|g' \
		${WRKSRC}/itstool.in

.include <bsd.port.mk>
