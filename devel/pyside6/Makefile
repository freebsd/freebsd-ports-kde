# $FreeBSD$

PORTNAME=	pyside6
DISTVERSION=	6.0.0
CATEGORIES=	devel
MASTER_SITES=	QT/official_releases/QtForPython/shiboken6/PySide6-${DISTVERSION}-src
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyside-setup-opensource-src-${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python Qt bindings for Qt 6

LICENSE=	LGPL3

BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:devel/vulkan-headers \
		llvm${LLVM_DEFAULT}>0:devel/llvm${LLVM_DEFAULT} \
		git>0:devel/git \
		${PYTHON_PKGNAMEPREFIX}sphinx>0:textproc/py-sphinx
LIB_DEPENDS=	libvulkan.so:graphics/vulkan-loader \
		libLLVM.so:devel/llvm${LLVM_DEFAULT} \
		libshiboken6.cpython-${PYTHON_SUFFIX}${PYTHON_ABIVER}.so:devel/shiboken6@${PY_FLAVOR}

USES=		cmake gl python:3.5+ qt:6 tar:xz
USE_GL=		gl
USE_LDCONFIG=	yes
USE_PYTHON=	flavors
USE_QT=		5compat base declarative doc imageformats quick3d quickcontrols2 quicktimeline networkauth shadertools svg tools translations wayland
# Bug with 3d: https://bugreports.qt.io/projects/PYSIDE/issues/PYSIDE-1450

CMAKE_ARGS+=	-DPYTHON_EXECUTABLE=${PYTHON_CMD}
		

.include <bsd.port.pre.mk>

PLIST_SUB+=	PYVERSTR=.cpython-${PYTHON_SUFFIX}${PYTHON_ABIVER}
PLIST_SUB+=	DISTVERSION=${DISTVERSION}

WRKSRC=		${WRKDIR}/pyside-setup-opensource-src-${DISTVERSION}/sources/pyside6

#.if ${ARCH} == amd64 || ${ARCH} == i386
#PLIST_SUB+=	WEBENGINE=""
#USE_QT+=	webengine
#.else
#PLIST_SUB+=	WEBENGINE="@comment "
#.endif

# AVOID a build_fs_violation with poudriere
post-build:
	${RM} -r ${PYTHON_SITELIBDIR}/shiboken6/files.dir/shibokensupport/__pycache__
	${RM} -r ${PYTHON_SITELIBDIR}/shiboken6/files.dir/shibokensupport/signature/__pycache__
	${RM} -r ${PYTHON_SITELIBDIR}/shiboken6/files.dir/shibokensupport/signature/lib/__pycache__
post-stage:
	${RM} -r ${PYTHON_SITELIBDIR}/shiboken6/files.dir/shibokensupport/__pycache__
	${RM} -r ${PYTHON_SITELIBDIR}/shiboken6/files.dir/shibokensupport/signature/__pycache__
	${RM} -r ${PYTHON_SITELIBDIR}/shiboken6/files.dir/shibokensupport/signature/lib/__pycache__

.include <bsd.port.post.mk>
