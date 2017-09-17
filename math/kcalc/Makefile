# $FreeBSD: branches/plasma5/KDE/math/kcalc/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kcalc
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Scientific calculator for KDE

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr
BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm config configwidgets doctools guiaddons \
		i18n init notifications xmlgui
USE_QT5=	buildtools_build qmake_build widgets xml

.include <bsd.port.mk>
