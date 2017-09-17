# $FreeBSD: branches/plasma5/KDE/net-im/ktp-call-ui/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-call-ui
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Voice/Video Call UI for Telepathy

LIB_DEPENDS=	libKTpCommonInternals.so:net-im/ktp-common-internals \
		libQt5GStreamer-1.0.so:multimedia/gstreamer1-qt5 \
		libboost_thread.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 pkgconfig python:2 tar:xz
USE_KDE=	config ecm iconthemes i18n kdeclarative notifications xmlgui kcmutils
USE_QT5=	buildtools_build gui network qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
