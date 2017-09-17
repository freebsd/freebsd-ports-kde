# $FreeBSD$

PORTNAME=	audiocd-kio
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	audio kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE IOSlave for accessing audio CDs

LICENSE=	GPLv2

LIB_DEPENDS=	libFLAC.so:audio/flac \
		libcdda_paranoia.so:audio/cdparanoia \
		libogg.so:audio/libogg \
		libvorbis.so:audio/libvorbis \
		libKF5Cddb.so:audio/libkcddb \
		libKF5CompactDisc.so:audio/libkcompactdisc

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core qmake_build

USE_LDCONFIG=	yes

OPTIONS_DEFINE=	LAME
LAME_DESC=	Install LAME MP3 audio encoder
LAME_RUN_DEPENDS=	lame:audio/lame

.include <bsd.port.mk>
