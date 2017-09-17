# $FreeBSD$

PORTNAME=	kalzium
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	science kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Periodic table of elements for KDE 4

LIB_DEPENDS=	libopenbabel.so:science/openbabel \
		libavogadro.so:science/avogadro
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/eigen2.pc:math/eigen2 \
		${LOCALBASE}/libdata/pkgconfig/eigen3.pc:math/eigen3 \
		${LOCALBASE}/lib/ocaml/facile/facile.a:math/facile \
		${LOCALBASE}/libdata/pkgconfig/chemical-mime-data.pc:science/chemical-mime-data
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/chemical-mime-data.pc:science/chemical-mime-data

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_KDE=	ecm archive config coreaddons doctools emoticons i18n itemmodels itemviews \
		kdelibs4support khtml newstuff parts plotting solid \
		unitconversion widgetsaddons
USE_OCAML=	yes
NO_OCAML_RUNDEPENDS=	yes
USE_QT5=	buildtools_build core opengl qmake_build quick script svg widgets

USE_LDCONFIG=	yes

.include <bsd.port.mk>
