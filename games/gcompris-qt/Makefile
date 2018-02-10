# $FreeBSD$

PORTNAME=	gcompris-qt
MASTER_SITES=	http://gcompris.net/download/qt/src/
DISTVERSION=	0.81
CATEGORIES=	games kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Gnome2 educational games and activities for kids ages 2 to 10

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libBox2D.so:x11-toolkits/qml-box2d

USES=		cmake:outsource kde:5 tar:xz
USE_KDE=	doctools
USE_QT5=	core gui multimedia network qml quick sensors svg widgets \
		xml xmlpatterns \
		buildtools_build linguisttools_build qmake_build

CMAKE_ARGS=	-DQML_BOX2D_LIBRARY=${QT_QMLDIR}/Box2D.2.0

.include <bsd.port.mk>
