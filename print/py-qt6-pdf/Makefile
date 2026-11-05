PORTNAME=	pdf
DISTVERSION=	${PYQTPDF_VERSION}
CATEGORIES=	print devel python
MASTER_SITES=	${MASTER_SITES_PYQTPDF}
PKGNAMEPREFIX=	${PYQT_PY_RELNAME}-
DISTNAME=	${PYQTPDF_DISTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt6 toolkit, QtPdf module
WWW=		https://riverbankcomputing.com/software/pyqt

ONLY_FOR_ARCHS=	aarch64 amd64 armv7 i386 powerpc64le

USES=		gl pyqt:6,dist python qt:6
USE_GL=		opengl
USE_PYQT=	pyqt6 qtbuilder:build sip:build
USE_PYTHON=	concurrent flavors
USE_QT=		base pdf

PLIST_SUB=	PYQT_PDF_VERSION=${DISTVERSION}

post-install:
	@${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/PyQt6 \
		-name '*.so*' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
