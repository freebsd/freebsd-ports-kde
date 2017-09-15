# $FreeBSD: head/devel/py-pykde4/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	pykde4
DISTVERSION=	${KDE4_VERSION}
PORTREVISION=	6
CATEGORIES=	devel kde kde-kde4 python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for KDE

LIB_DEPENDS=	libqwt.so:x11-toolkits/qwt5

USES=		cmake:outsource kde:4 python:2 pyqt:4 tar:xz
USE_KDE=	kdelibs automoc4 soprano
USE_PYQT=	declarative designer gui network opengl phonon script sip \
		sql svg webkit xml \
		dbussupport_run
USE_QT4=	corelib dbus designer_build gui network xml \
		qmake_build moc_build uic_build rcc_build

CMAKE_ARGS+=	-DWITH_PolkitQt:BOOL=FALSE \
		-DENABLE_PYTHON=ON \
		-DPYTHON_INCLUDE_DIR:PATH=${WRKDIR}/include/${PYTHON_VERSION} \
		-DWITH_Akonadi:BOOL=FALSE \
		-DWITH_Nepomuk:BOOL=FALSE \
		-DWITH_Okular:BOOL=FALSE

SUB_FILES=	kdebindings4.pth
SUB_LIST=	PYTHONPREFIX_SITELIBDIR=${PYTHONPREFIX_SITELIBDIR}

PLIST_SUB+=	SIPDIR=share/sip

OPTIONS_DEFINE=	EXAMPLES

post-patch:
	${FIND} -d ${PATCH_WRKSRC}/sip -name "*.orig" -delete

pre-configure:
	${REINPLACE_CMD} -e '/add_subdirectory(examples)/ d' \
		-e '/add_subdirectory(tools)/ d' \
		${WRKSRC}/CMakeLists.txt
	${RM} ${WRKSRC}/examples/CMakeLists.txt

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${STAGEDIR}${PYTHON_SITELIBDIR}
	${INSTALL_DATA} ${WRKDIR}/kdebindings4.pth ${STAGEDIR}${PYTHON_SITELIBDIR}

.include <bsd.port.mk>
