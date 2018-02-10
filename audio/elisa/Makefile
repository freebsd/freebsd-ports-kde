# $FreeBSD$

PORTNAME=	elisa
DISTVERSION=	0.0.81
CATEGORIES=	audio
MASTER_SITES=	KDE/unstable/${PORTNAME}/${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Elisa is a music player designed to be simple and nice to use

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource kde:5 tar:xz
USE_QT5=	dbus core gui multimedia quick quickcontrols2 xml \
		buildtools_build qmake_build linguisttools_build
USE_KDE=	baloo config coreaddons doctools filemetadata i18n \
		kcmutils kdeclarative package \
		xmlgui \
		ecm_build

.include <bsd.port.mk>
