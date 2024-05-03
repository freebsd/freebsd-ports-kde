PORTNAME=	kopete
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net-im kde kde-applications

IGNORE=		No longer shipped as part of KDE Gear from 24.x on

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE multi-protocol instant messenger
WWW=		https://apps.kde.org/kopete/

BUILD_DEPENDS=	v4l_compat>0:multimedia/v4l_compat
LIB_DEPENDS=	libidn.so:dns/libidn \
		libjasper.so:graphics/jasper \
		libotr.so:security/libotr \
		libv4l2.so:multimedia/libv4l

USES=		cmake compiler:c++11-lang desktop-file-utils gnome jpeg kde:6 \
		qca qt:6 shebangfix tar:xz xorg
USE_GNOME=	libxml2 libxslt
USE_KDE=	archive auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons dnssd guiaddons i18n iconthemes \
		itemviews jobwidgets kcmutils kio notifications notifyconfig \
		parts phonon service solid sonnet syntaxhighlighting \
		texteditor textwidgets unitconversion wallet widgetsaddons \
		windowsystem xmlgui \
		ecm:build
# KDE PIM components
USE_KDE+=	contacts identitymanagement libkleo pimtextedit
USE_QT=		base
USE_XORG=	x11

SHEBANG_FILES=	protocols/winpopup/winpopup-install \
		protocols/winpopup/winpopup-send \
		kopete/kconf_update/*.pl

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
