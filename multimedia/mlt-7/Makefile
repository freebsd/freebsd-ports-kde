PORTNAME=	mlt
DISTVERSION=	7.0.1
# Don't use GitHub "fake" downloads that are auto-generated from a
# tag; the project uploads tarballs for each release.
MASTER_SITES=	https://github.com/mltframework/${PORTNAME}/releases/download/v${DISTVERSION}/
CATEGORIES?=	multimedia

MAINTAINER=	kde@FreeBSD.org
COMMENT?=	Multimedia framework for TV broadcasting

LICENSE?=	GPLv2 GPLv3 LGPL21
LICENSE_COMB?=	multi

USES+=		alias cmake compiler:c++11-lang eigen:3 pkgconfig

# It's still mlt, but installs support files to mlt-7
DATADIR=	${PREFIX}/share/${PORTNAME}-7

.ifndef(SLAVEPORT) # Master port.

# They both install bin/melt.
CONFLICTS_INSTALL=	freeze-[0-9]* \
			mlt-6*

LIB_DEPENDS=	libfftw3.so:math/fftw3 \
		libfreetype.so:print/freetype2 \
		libogg.so:audio/libogg \
		libvorbis.so:audio/libvorbis

USE_GL=		gl
USE_GNOME=	libxml2
USE_SDL=	image2
USE_XORG=	x11
USES+=		gl iconv pathfix sdl xorg
PATHFIX_MAKEFILEIN=	Makefile
CONFIGURE_ARGS+=--disable-qt --swig-languages=none
USE_LDCONFIG=	yes

PLIST_SUB=	PORTVERSION="${PORTVERSION}"

PORTDOCS=	AUTHORS NEWS README.md docs
PORTEXAMPLES=	demo

OPTIONS_DEFINE=	DOCS EXAMPLES FFMPEG FREI0R GDK JACK OPENGL \
		SAMPLERATE SOX VIDSTAB
OPTIONS_DEFAULT=FFMPEG FREI0R GDK OPENGL SAMPLERATE SOX VIDSTAB
OPTIONS_SUB=	yes

GDK_DESC=	Images and text rendering via GDK
SOX_DESC=	SoX audio effects support
VIDSTAB_DESC=	Video stabilization support via Vid.Stab

FFMPEG_SUFX=		# Currently empty.
FFMPEG_LIB_DEPENDS=	libavformat${FFMPEG_SUFX}.so:multimedia/ffmpeg${FFMPEG_SUFX}
FFMPEG_CONFIGURE_ENABLE=avformat
FFMPEG_CONFIGURE_ON=	--avformat-suffix="${FFMPEG_SUFX}"

FREI0R_BUILD_DEPENDS=	${LOCALBASE}/include/frei0r.h:graphics/frei0r
FREI0R_CMAKE_BOOL=	MOD_FREI0R
FREI0R_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FILE_PACKAGE_FREI0R

GDK_LIB_DEPENDS=	libexif.so:graphics/libexif \
			libfontconfig.so:x11-fonts/fontconfig
GDK_USE=		GNOME=gdkpixbuf2,pango
GDK_CMAKE_BOOL=		MOD_GDK
GDK_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_GdkPixbuf

JACK_LIB_DEPENDS=	libjack.so:audio/jack
JACK_BUILD_DEPENDS=	${LOCALBASE}/include/ladspa.h:audio/ladspa
JACK_USE=		GNOME=glib20
JACK_CMAKE_BOOL=	MOD_JACKRACK
JACK_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_JACK

# Prepare for OpenCV 3 port.
CONFIGURE_ARGS+=	--disable-opencv
OPENCV_CONFIGURE_ENABLE=opencv

OPENGL_LIB_DEPENDS=	libepoxy.so:graphics/libepoxy \
			libmovit.so:graphics/movit
OPENGL_USE=		GL=gl
OPENGL_CONFIGURE_ENABLE=opengl

SAMPLERATE_LIB_DEPENDS=	libsamplerate.so:audio/libsamplerate
SAMPLERATE_CONFIGURE_ENABLE=resample

SOX_LIB_DEPENDS=	libsox.so:audio/sox
SOX_CONFIGURE_ENABLE=	sox

VIDSTAB_LIB_DEPENDS=	libvidstab.so:multimedia/vid.stab
VIDSTAB_CONFIGURE_ENABLE=vid.stab

common-post-install:
	@${TRUE}

post-install-DOCS-on:
.for f in ${PORTDOCS}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${f} ${STAGEDIR}${DOCSDIR}
.endfor

post-install-EXAMPLES-on:
.for f in ${PORTEXAMPLES}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${f} ${STAGEDIR}${EXAMPLESDIR}
.endfor

.else # Slave port.

PORTSCOUT=	ignore:1

LIB_DEPENDS+=	libmlt.so:${MASTER_PORT}

PLIST?=		${.CURDIR}/pkg-plist

. if ${SLAVEPORT:Mqt*} # Qt slave port.
PKGNAMESUFFIX=	-${SLAVEPORT}

COMMENT=	Qt ${SLAVEPORT:C/[^0-9]//g} plugin for the MLT multimedia framework

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	multi

LIB_DEPENDS+=	libexif.so:graphics/libexif

CONFIGURE_ARGS+=--enable-qt \
		--qt-libdir="${QT_LIBDIR}" \
		--qt-includedir="${QT_INCDIR}"
BUILD_WRKSRC=	${WRKSRC}/src/modules/qt
. elif ${SLAVEPORT:Mswig} # SWIG slave port.
LANGUAGE=	${SLAVEPORT:Nswig}

COMMENT=	${LANGUAGE} bindings for the MLT multimedia framework

LICENSE=	LGPL21
LICENSE_COMB=	single

BUILD_DEPENDS+=	swig:devel/swig

_CFLAGS=	-I${LOCALBASE}/include -L${LOCALBASE}/lib
CFLAGS+=	${_CFLAGS}
CXXFLAGS+=	${_CFLAGS}
CONFIGURE_ARGS+=--swig-languages=${LANGUAGE:tl}
BUILD_WRKSRC=	${WRKSRC}/src/swig
INSTALL_WRKSRC=	${BUILD_WRKSRC}/${LANGUAGE:tl}

EXAMPLESDIR=	${PREFIX}/share/examples/${PORTNAME}/${LANGUAGE:tl}
. endif

INSTALL_WRKSRC?=${BUILD_WRKSRC}

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}

# Dummy placeholder target.
common-post-install:
	@${TRUE}

.endif

post-install: common-post-install
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/* 2>/dev/null || ${TRUE}
	@${RMDIR} -p ${STAGEDIR}${PREFIX}/lib/${PORTNAME} 2>/dev/null || ${TRUE}

.include <bsd.port.mk>
