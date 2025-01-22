PORTNAME=	libkmahjongg
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for the Mahjongg Solitaire for KDE
WWW=		https://www.kde.org/applications/games/kmahjongg/

USES=		cmake compiler:c++11-lang gettext kde:6 qt:6 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons i18n \
		widgetsaddons \
		ecm:build
USE_QT=		base svg
USE_LDCONFIG=	yes

OPTIONS_DEFINE=		DOCS SVGZ
OPTIONS_DEFAULT=	SVGZ

SVGZ_DESC=		For installing SVG files as SVGZ
SVGZ_BUILD_DEPENDS=	7zz:archivers/7-zip

.include <bsd.port.mk>
