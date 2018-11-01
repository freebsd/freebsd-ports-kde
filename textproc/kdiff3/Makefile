# $FreeBSD$

PORTNAME=	kdiff3
DISTVERSION=	1.7.90.20181029
CATEGORIES=	textproc kde

MAINTAINER=	kdeg@FreeBSD.org
COMMENT=	KDE graphical frontend for diff

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource kde:5 qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	42403aa
USE_KDE=	auth bookmarks codecs completion config configwidgets coreaddons crash ecm i18n iconthemes jobwidgets kio parts service sonnet textwidgets widgetsaddons xmlgui
USE_QT=		concurrent core dbus gui network printsupport widgets xml \
		buildtools_build qmake_build

CONFLICTS_INSTALL=	kdiff-kde4

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
