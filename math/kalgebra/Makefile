# $FreeBSD: branches/plasma5/KDE/math/kalgebra/Makefile 13926 2017-04-20 21:19:45Z tcberner $

PORTNAME=	kalgebra
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE graph calculator

LIB_DEPENDS=	libAnalitza.so:math/analitza
BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

CMAKE_ARGS=	-DBUILD_mobile:BOOL=FALSE
USES=		cmake:outsource gettext kde:5 tar:xz
USE_GL=		glu
USE_KDE=	configwidgets doctools ecm i18n kio widgetsaddons
USE_QT5=	core gui network opengl printsupport qml quick svg testlib \
		webengine widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
