# $FreeBSD: branches/plasma5/KDE/math/cantor/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	cantor
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 5 frontend to mathematical software

LIB_DEPENDS=	libspectre.so:print/libspectre \
		libqalculate.so:math/libqalculate \
		libAnalitza.so:math/analitza
BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 pkgconfig python:3 tar:xz
USE_KDE=	ecm config emoticons itemmodels itemviews init newstuff \
		texteditor coreaddons archive parts pty kdelibs4support
USE_QT5=	core buildtools_build qmake_build xml xmlpatterns
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	LUAJIT MAXIMA OCTAVE R SAGE SCILAB
OPTIONS_SUB=	yes # R LUAJIT

LUAJIT_DESC=	Build LuaJIT backend and install LuaJIT
LUAJIT_LIB_DEPENDS=	libluajit-5.1.so:lang/luajit
LUAJIT_CMAKE_OFF=	-DWITH_LuaJIT:BOOL=FALSE

MAXIMA_DESC=	Install Maxima
MAXIMA_RUN_DEPENDS=	maxima:math/maxima

OCTAVE_DESC=	Install Octave
OCTAVE_RUN_DEPENDS=	octave:math/octave

R_DESC=		Build R backend and install R
R_LIB_DEPENDS=	libR.so:math/R
# Required to set CFLAGS for -lgfortran.
R_USES=		fortran
R_CMAKE_OFF=	-DWITH_R:BOOL=FALSE

SAGE_DESC=	Install Sage
SAGE_RUN_DEPENDS=	sage:math/sage

SCILAB_DESC=	Install Scilab
SCILAB_RUN_DEPENDS=	scilab:math/scilab

post-patch:
	${REINPLACE_CMD} -e '/FIND_PROGRAM(_GFORTRAN_EXECUTABLE/s,gfortran,${FC},' \
		${WRKSRC}/cmake/FindR.cmake
	${REINPLACE_CMD} -e '/find_library(PYTHONLIBS3_LIBRARY/s,python3.5m,python3.5m python3.6m,' \
		${WRKSRC}/cmake/FindPythonLibs3.cmake

.include <bsd.port.mk>
