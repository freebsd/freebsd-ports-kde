# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD$

PORTNAME=	ffmpegthumbs
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	multimedia kde kde-applications
PKGNAMEPREFIX=	kdemultimedia-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	FFmpeg-based thumbnail generator for video files

LICENSE=	GPLv2

LIB_DEPENDS=	libswscale.so:multimedia/ffmpeg

USES=		cmake:outsource kde:5 pkgconfig tar:xz
USE_KDE=	kio
USE_QT5=	buildtools_build gui qmake_build

.include <bsd.port.mk>
