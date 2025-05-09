PORTNAME=	lmms
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2.2
PORTREVISION=	11
PORTEPOCH=	2
CATEGORIES=	audio

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	All-in-one sequencer, drum machine, sampler, and more
WWW=		https://lmms.io/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

DEPRECATED=	Depends on expiring audio/carla
EXPIRATION_DATE=2025-06-01

BUILD_DEPENDS=	${LOCALBASE}/include/ladspa.h:audio/ladspa
LIB_DEPENDS=	libcarla_utils.so:audio/carla \
		libfftw3.so:math/fftw3 \
		libfftw3f.so:math/fftw3-float \
		libFLAC.so:audio/flac \
		libfltk.so:x11-toolkits/fltk \
		libfluidsynth.so:audio/fluidsynth \
		libfontconfig.so:x11-fonts/fontconfig \
		libmp3lame.so:audio/lame \
		libogg.so:audio/libogg \
		libQt5X11Extras.so:x11/qt5-x11extras \
		libQt5Xml.so:textproc/qt5-xml \
		libsamplerate.so:audio/libsamplerate \
		libsndfile.so:audio/libsndfile \
		libvorbis.so:audio/libvorbis
RUN_DEPENDS=	${LOCALBASE}/lib/ladspa/cmt.so:audio/cmt \
		${LOCALBASE}/share/ladspa/rdf/caps.rdf:audio/caps-plugins \
		${LOCALBASE}/share/ladspa/rdf/swh-plugins.rdf:audio/swhplugins \
		${LOCALBASE}/share/ladspa/rdf/tap-plugins.rdf:audio/tap-plugins

USES=		cmake compiler:c++11-lang desktop-file-utils localbase:ldflags \
		pkgconfig qt:5 shared-mime-info xorg
USE_GITHUB=	yes
GH_ACCOUNT=	LMMS
GH_TUPLE=	mjansson:rpmalloc:1.4.0:rpmalloc/src/3rdparty/rpmalloc/rpmalloc \
		lukas-w:qt5-x11embed:ec77d4ba40bebc0c53a016adb646b6fa65dd5faf:qt5x11embed/src/3rdparty/qt5-x11embed
USE_LDCONFIG=	yes
USE_QT=		core gui widgets x11extras xml buildtools:build \
		linguisttools:build qmake:build
USE_XORG=	xcursor xext xfixes xft xinerama xrender

CMAKE_ON=	WANT_QT5
CMAKE_OFF=	WANT_ALSA WANT_CALF WANT_CAPS WANT_CMT WANT_STK WANT_SWH \
		WANT_TAP WANT_VST

OPTIONS_DEFINE=		JACK OSS PORTAUDIO PULSEAUDIO SDL SNDIO
OPTIONS_DEFAULT=	OSS

JACK_LIB_DEPENDS=	libjack.so:audio/jack
JACK_CMAKE_BOOL=	WANT_JACK
PORTAUDIO_LIB_DEPENDS=	libportaudio.so:audio/portaudio
PORTAUDIO_CMAKE_BOOL=	WANT_PORTAUDIO
PULSEAUDIO_LIB_DEPENDS=	libpulse.so:audio/pulseaudio
PULSEAUDIO_CMAKE_BOOL=	WANT_PULSEAUDIO
SDL_USES=		sdl
SDL_USE=		SDL=sdl
SDL_CMAKE_OFF=		WANT_SDL
SNDIO_LIB_DEPENDS=	libsndio.so:audio/sndio
SNDIO_CMAKE_BOOL=	WANT_SNDIO

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} 's|/usr|${LOCALBASE}|g' ${WRKSRC}/src/core/ConfigManager.cpp
	@${REINPLACE_CMD} 's|/usr/local|${LOCALBASE}|g' \
		${WRKSRC}/src/core/LadspaManager.cpp
	@${REINPLACE_CMD} -e 's/lib64/lib/' \
		${WRKSRC}/cmake/modules/DetectMachine.cmake

post-patch-OSS-off:
	@${REINPLACE_CMD} \
		-e 's|SET(LMMS_HAVE_OSS TRUE)|SET(LMMS_HAVE_OSS FALSE)|; \
		    s|SET(STATUS_OSS "OK")|SET(STATUS_OSS "<disabled>")|' \
		${WRKSRC}/CMakeLists.txt

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/bash-completion/completions && \
		${INSTALL_DATA} ${WRKSRC}/doc/bash-completion/lmms ${STAGEDIR}${PREFIX}/share/bash-completion/completions/
	@${RLN} ${STAGEDIR}${DATADIR}/themes/default/icon.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/lmms.png

.include <bsd.port.mk>
