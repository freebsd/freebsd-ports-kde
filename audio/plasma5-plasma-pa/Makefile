# $FreeBSD: branches/plasma5/KDE/audio/plasma5-plasma-pa/Makefile 13948 2017-04-25 15:08:16Z tcberner $

PORTNAME=	plasma-pa
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	audio kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Plasma pulse audio mixer

LIB_DEPENDS=	libcanberra.so:audio/libcanberra \
		libpulse.so:audio/pulseaudio

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 \
		pkgconfig shebangfix tar:xz
USE_GNOME=	gconf2
USE_KDE=	config configwidgets coreaddons ecm globalaccel i18n \
		kdeclarative package plasma-framework
USE_QT5=	buildtools_build core dbus gui network qmake_build \
		qml quick widgets

SHEBANG_FILES=	data/plasmaVolumeDisableKMixAutostart.pl

.include <bsd.port.mk>
