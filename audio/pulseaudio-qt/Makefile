# $FreeBSD$

PORTNAME=	pulseaudio-qt
DISTVERSION=	5.45.0.a.20181124
CATEGORIES=	audio kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Pulseaudio bindings for Qt

LIB_DEPENDS=	libcanberra.so:audio/libcanberra \
		libpulse.so:audio/pulseaudio

USES=		cmake compiler:c++11-lib cpe gettext kde:5 \
		pkgconfig qt:5 shebangfix
USE_KDE=	coreaddons ecm doctools i18n
USE_QT=		core dbus gui \
		buildtools_build qmake_build
USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	17bb1f8

.include <bsd.port.mk>
