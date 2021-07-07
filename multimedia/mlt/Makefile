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

USES+=		alias cmake compiler:c++11-lang eigen:3 gnome pkgconfig

# It's still mlt, but installs support files to mlt-7
DATADIR=	${PREFIX}/share/${PORTNAME}-7

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
USE_LDCONFIG=	yes

# Explicitly disabled modules, and explicitly always-enabled
CMAKE_OFF=	MOD_NDI MOD_OPENCV MOD_RUBBERBAND MOD_SDL1
CMAKE_ON=	\
		MOD_DECKLINK MOD_KDENLIVE MOD_NORMALIZE \
		MOD_OLDFILM MOD_PLUS MOD_PLUSGPL \
		MOD_RTAUDIO MOD_SDL2 MOD_VORBIS MOD_XINE MOD_XML

PLIST_SUB=	PORTVERSION="${PORTVERSION}"

PORTDOCS=	AUTHORS NEWS README.md docs
PORTEXAMPLES=	demo

OPTIONS_DEFINE=	DOCS EXAMPLES FFMPEG FREI0R GDK JACK OPENGL \
		QT SAMPLERATE SOX VIDSTAB
OPTIONS_DEFAULT=FFMPEG FREI0R GDK OPENGL SAMPLERATE SOX VIDSTAB
OPTIONS_SUB=	yes

GDK_DESC=	Images and text rendering via GDK
QT_DESC=	Qt UI support
SOX_DESC=	SoX audio effects support
VIDSTAB_DESC=	Video stabilization support via Vid.Stab

FFMPEG_SUFX=		# Currently empty.
FFMPEG_LIB_DEPENDS=	libavformat${FFMPEG_SUFX}.so:multimedia/ffmpeg${FFMPEG_SUFX}
FFMPEG_CMAKE_BOOL=	MOD_AVFORMAT

FREI0R_BUILD_DEPENDS=	${LOCALBASE}/include/frei0r.h:graphics/frei0r
FREI0R_CMAKE_BOOL=	MOD_FREI0R

GDK_LIB_DEPENDS=	libexif.so:graphics/libexif \
			libfontconfig.so:x11-fonts/fontconfig \
			libharfbuzz.so:print/harfbuzz
GDK_USE=		GNOME=gdkpixbuf2,pango
GDK_CMAKE_BOOL=		MOD_GDK

JACK_LIB_DEPENDS=	libjack.so:audio/jack
JACK_BUILD_DEPENDS=	${LOCALBASE}/include/ladspa.h:audio/ladspa
JACK_USE=		GNOME=glib20
JACK_CMAKE_BOOL=	MOD_JACKRACK

OPENGL_LIB_DEPENDS=	libepoxy.so:graphics/libepoxy \
			libmovit.so:graphics/movit
OPENGL_USE=		GL=gl
OPENGL_CMAKE_BOOL=	MOD_MOVIT

QT_USES=		qt
QT_USE=			QT=core
QT_CMAKE_BOOL=		MOD_QT

SAMPLERATE_LIB_DEPENDS=	libsamplerate.so:audio/libsamplerate
SAMPLERATE_CMAKE_BOOL=	MOD_RESAMPLE

SOX_LIB_DEPENDS=	libsox.so:audio/sox
SOX_CMAKE_BOOL=		MOD_SOX

VIDSTAB_LIB_DEPENDS=	libvidstab.so:multimedia/vid.stab
VIDSTAB_CMAKE_BOOL=	MOD_VIDSTAB

post-install-DOCS-on:
.for f in ${PORTDOCS}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${f} ${STAGEDIR}${DOCSDIR}
.endfor

post-install-EXAMPLES-on:
.for f in ${PORTEXAMPLES}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${f} ${STAGEDIR}${EXAMPLESDIR}
.endfor

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/melt-7

.include <bsd.port.mk>
