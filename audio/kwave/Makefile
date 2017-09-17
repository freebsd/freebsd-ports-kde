# $FreeBSD: branches/plasma5/KDE/audio/kwave/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kwave
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	audio kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Sound editor for KDE

BUILD_DEPENDS=	convert:graphics/ImageMagick
LIB_DEPENDS=	libaudiofile.so:audio/libaudiofile \
		libFLAC.so:audio/flac \
		libfftw3.so:math/fftw3 \
		libogg.so:audio/libogg \
		libopus.so:audio/opus \
		libsamplerate.so:audio/libsamplerate \
		libvorbisenc.so:audio/libvorbis

USES=		cmake:outsource desktop-file-utils gettext kde:5 pkgconfig tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons ecm i18n iconthemes itemviews \
		jobwidgets kio service solid sonnet textwidgets widgetsaddons \
		xmlgui
USE_QT5=	concurrent core dbus gui multimedia network widgets xml \
		buildtools_build qmake_build

USE_GCC=	any

OPTIONS_GROUP=			AUDIOPLUGIN
OPTIONS_GROUP_AUDIOPLUGIN=	ALSA PULSEAUDIO
ALSA_CMAKE_BOOL=		WITH_ALSA
ALSA_LIB_DEPENDS=		libasound.so:audio/alsa-lib
PULSEAUDIO_CMAKE_BOOL=		WITH_PULSEAUDIO
PULSEAUDIO_LIB_DEPENDS=		libpulse.so:audio/pulseaudio

.include <bsd.port.mk>
