# $FreeBSD: branches/plasma5/PORTS/editors/kile/Makefile 13728 2017-03-10 20:39:23Z tcberner $

PORTNAME=	kile
PORTVERSION=	2.9.60
PKGNAMESUFFIX=	-kf5
CATEGORIES=	editors kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	LaTeX source editor for KDE

CONFLICTS_INSTALL=	kile-2.1.*

LIB_DEPENDS=	libOkular5Core.so:graphics/okular \
		libpoppler.so:graphics/poppler \
		libpoppler-qt5.so:graphics/poppler-qt5
RUN_DEPENDS=	identify:graphics/ImageMagick

USES=		cmake:outsource gettext-tools kde:5 pkgconfig shared-mime-info
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons doctools ecm guiaddons i18n \
		iconthemes init itemviews jobwidgets js khtml kio parts \
		service solid sonnet texteditor textwidgets widgetsaddons \
		windowsystem xmlgui
USE_QT5=	core dbus gui network script testlib widgets xml \
		buildtools_build qmake_build
USE_TEX=	latex

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	004a23a

.include <bsd.port.mk>
