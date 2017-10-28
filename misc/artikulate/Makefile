# $FreeBSD: branches/plasma5/KDE/misc/artikulate/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	artikulate
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Pronunciation trainer for KDE

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs \
		libQt5GStreamer-1.0.so:multimedia/gstreamer1-qt5

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets crash doctools ecm i18n kdeclarative \
		newstuff widgetsaddons xmlgui
USE_QT5=	buildtools_build gui multimedia network qmake_build qml \
		quick sql testlib widgets xmlpatterns
USE_LDCONFIG=	yes

.include <bsd.port.mk>
