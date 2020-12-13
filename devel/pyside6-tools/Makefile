# $FreeBSD$

PORTNAME=	pyside6-tools
DISTVERSION=	6.0.0
CATEGORIES=	devel
MASTER_SITES=	QT/official_releases/QtForPython/shiboken6/PySide6-${DISTVERSION}-src
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyside-setup-opensource-src-${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Pyside6 development tools

LICENSE=	BSD3CLAUSE GPLv2
LICENSE_COMB=	multi

BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:devel/vulkan-headers \
		git>0:devel/git
LIB_DEPENDS=	libshiboken6.cpython-${PYTHON_SUFFIX}${PYTHON_ABIVER}.so:devel/shiboken6@${PY_FLAVOR} \
		libpyside6.cpython-${PYTHON_SUFFIX}${PYTHON_ABIVER}.so:devel/pyside6@${PY_FLAVOR}

USES=		cmake gl python:3.5+ qt:6 shebangfix tar:xz xorg
USE_GL=		gl
USE_PYTHON=	flavors
USE_QT=		base tools

SHEBANG_FILES=	pyside_tool.py

CMAKE_ARGS+=	-DQT6_INSTALL_PREFIX=${LOCALBASE}/lib/qt6

PLIST_FILES=	bin/pyside_tool.py

.include <bsd.port.pre.mk>

WRKSRC=		${WRKDIR}/pyside-setup-opensource-src-${DISTVERSION}/sources/pyside-tools

#.if ${ARCH} == amd64 || ${ARCH} == i386
#USE_QT+=	webengine
#.endif

.include <bsd.port.post.mk>
