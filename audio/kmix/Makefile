# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/audio/kmix/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kmix
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	audio kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Sound mixer for KDE

LICENSE=	GPLv2

LIB_DEPENDS=	libasound.so:audio/alsa-lib

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	configwidgets dbusaddons ecm emoticons globalaccel i18n \
		iconthemes init itemmodels itemviews kcmutils kdelibs4support \
		plasma-framework xmlgui
USE_QT5=	buildtools_build core gui qmake_build

# we want the KF5 version of kmix
CMAKE_ARGS=	-DKMIX_KF5_BUILD:BOOL=TRUE

OPTIONS_DEFINE=	PULSEAUDIO
# TODO: readd ALSA option
#
# ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib
# ALSA_EXTRA_PATCHES_OFF=	${FILESDIR}/extrapatch-no_alsa

PULSEAUDIO_LIB_DEPENDS=	libcanberra.so:audio/libcanberra \
			libpulse.so:audio/pulseaudio
PULSEAUDIO_USE=		GNOME=glib20
PULSEAUDIO_CMAKE_ON=	-DWITH_Canberra:BOOL=ON \
			-DWITH_PulseAudio:BOOL=ON
PULSEAUDIO_CMAKE_OFF=	-DWITH_Canberra:BOOL=OFF \
			-DWITH_PulseAudio:BOOL=OFF

.include <bsd.port.mk>
