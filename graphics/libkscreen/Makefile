# Created by: alonso@
# $FreeBSD: branches/plasma5/PORTS/graphics/libkscreen/Makefile 13303 2016-11-07 22:24:37Z tcberner $

PORTNAME=	libkscreen
DISTVERSION=	1.0.5
PORTREVISION=	3
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE screen management library

LIB_DEPENDS=	libqjson.so:devel/qjson \
		libxcb.so:x11/libxcb \
		libxcb-image.so:x11/xcb-util-image \
		libxcb-render-util.so:x11/xcb-util-renderutil

USE_KDE=	kdelibs automoc4
USES=		cmake:outsource kde:4 pathfix pkgconfig tar:xz
USE_QT4=	corelib dbus gui script \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

PLIST_SUB+=	DISTVERSION="${PORTVERSION}"

.include <bsd.port.mk>
