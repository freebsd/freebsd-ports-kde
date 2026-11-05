PORTNAME=	canvaspainter
DISTVERSION=	${PYQTCANVASPAINTER_VERSION}
CATEGORIES=	x11-toolkits devel python
MASTER_SITES=	${MASTER_SITES_PYQTCANVASPAINTER}
PKGNAMEPREFIX=	${PYQT_PY_RELNAME}-
DISTNAME=	${PYQTCANVASPAINTER_DISTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt6 toolkit, CanvasPainter module
WWW=		https://riverbankcomputing.com/software/pyqtcanvaspainter

LICENSE=	${PYQT6_LICENSE}

USES=		gl pyqt:6,dist python qt:6
USE_GL=		opengl
USE_PYQT=	pyqt6 qtbuilder:build sip:build
USE_PYTHON=	concurrent flavors
USE_QT=		base canvaspainter declarative shadertools:build

PLIST_SUB=	PYQTCANVASPAINTER_VERSION=${DISTVERSION} \
		PYTHON_MAJOR_VER=${PYTHON_MAJOR_VER} \
		PYTHON_MAJOR_VER_regex=[[:<:]]${PYTHON_MAJOR_VER}[[:>:]]

post-install:
	@${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/PyQt6 \
		-name '*.so*' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
