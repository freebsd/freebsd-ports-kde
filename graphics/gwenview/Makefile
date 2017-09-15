# $FreeBSD: branches/plasma5/KDE/graphics/gwenview-kf5/Makefile 13698 2017-03-08 17:47:13Z tcberner $

PORTNAME=	gwenview
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Image viewer and browser for KDE

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml
LIB_DEPENDS=	libexiv2.so:graphics/exiv2 \
		liblcms2.so:graphics/lcms2

USES=		cmake:outsource gettext jpeg pkgconfig kde:5 tar:xz
USE_KDE=	activities ecm emoticons init itemmodels \
		kdelibs4support kimageformats
USE_QT5=	buildtools_build core dbus qmake_build

.include <bsd.port.mk>
