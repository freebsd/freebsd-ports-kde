PORTNAME=	kolf
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME:tu}_DESC}
WWW=		https://www.kde.org/applications/games/kolf/

USES=		cmake compiler:c++11-lang desktop-file-utils gettext kde:6 \
		pkgconfig qt:6 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons guiaddons i18n iconthemes \
		itemviews jobwidgets kio libkdegames notifications parts \
		phonon service solid sonnet textwidgets unitconversion \
		widgetsaddons windowsystem xmlgui \
		ecm:build
USE_QT=		base declarative

USE_LDCONFIG=	yes

OPTIONS_DEFINE=		DOCS SVGZ
OPTIONS_DEFAULT=	SVGZ

SVGZ_DESC=		For installing SVG files as SVGZ
SVGZ_BUILD_DEPENDS=	7zz:archivers/7-zip

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
