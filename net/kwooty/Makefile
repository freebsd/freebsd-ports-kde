# Created by: Mina R Waheeb <syncer@gmail.com>
# $FreeBSD$

PORTNAME=	kwooty
PORTVERSION=	1.1.0.20150623
CATEGORIES=	net kde

MAINTAINER=	syncer@gmail.com
COMMENT=	Usenet binary downloader for KDE4

RUN_DEPENDS=	${LOCALBASE}/bin/unrar:archivers/unrar \
		${LOCALBASE}/bin/par2:archivers/par2cmdline \
		${LOCALBASE}/bin/7z:archivers/p7zip

USES=		cmake gettext kde:5
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash ecm guiaddons i18n iconthemes itemviews \
		jobwidgets kcmutils kdelibs4support kio notifications parts \
		service solid sonnet textwidgets unitconversion wallet \
		widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network printsupport widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	46c9020

post-patch:
	${REINPLACE_CMD} -e 's|/usr/bin|${LOCALBASE}/bin|g' \
		${WRKSRC}/src/preferences/kwootysettings.kcfg
	${REINPLACE_CMD} -e 's|PreferencesServer::MAX_SERVERS|5|g' \
		${WRKSRC}/src/preferences/*.cpp \
		${WRKSRC}/src/widgets/*.cpp

.include <bsd.port.mk>
