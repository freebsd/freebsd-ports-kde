# $FreeBSD: branches/plasma5/KDE/astro/kstars/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kstars
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	astro kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE desktop planetarium

LIB_DEPENDS=	libcfitsio.so:astro/cfitsio \
		libwcs.so:astro/wcslib
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/eigen3.pc:math/eigen3 \
		xplanet:astro/xplanet
RUN_DEPENDS=	xplanet:astro/xplanet

USES=		cmake:outsource gettext compiler:c++11-lib kde:5 \
		pkgconfig tar:xz
USE_KDE=	config dbusaddons doctools ecm guiaddons i18n iconthemes init \
		jobwidgets kio newstuff notifications parts plotting \
		texteditor widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui multimedia network opengl \
		printsupport qmake_build qml quick sql svg testlib widgets \
		xml

# TODO: pykde...
# OPTIONS_DEFINE=	PYKDE
#
# PYKDE_DESC=	Support for updating supernovae data
# PYKDE_USE=	KDE4=pykde4_run

post-patch:
# climits defines ULLONG_MAX and LLONG_MAX
	${REINPLACE_CMD} -e 's#ULONG_LONG_MAX#ULLONG_MAX#g' \
			 -e 's#LONG_LONG_MAX#LLONG_MAX#g' \
		${WRKSRC}/kstars/fitsviewer/fitsdata.cpp

.include <bsd.port.mk>
