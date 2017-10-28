# $FreeBSD: branches/plasma5/KDE/x11-fm/dolphin/Makefile 13779 2017-03-18 09:57:45Z tcberner $

PORTNAME=	dolphin
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-fm kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE filemanager dolphin

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${QT_PLUGINDIR}/ffmpegthumbs.so:multimedia/kdemultimedia-ffmpegthumbs \
		${QT_PLUGINDIR}/gsthumbnail.so:graphics/kdegraphics-thumbnailers

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	activities baloo baloo-widgets bookmarks completion \
		coreaddons dbusaddons doctools ecm emoticons filemetadata \
		i18n iconthemes init itemmodels kcmutils kde-cli-tools \
		kdelibs4support kio newstuff notifications parts solid \
		texteditor windowsystem \
		kio-extras_run
USE_QT5=	buildtools_build concurrent core dbus gui phonon4 \
		qmake_build widgets

SHLIB_VER=	5.0.0
PLIST_SUB+=	SHLIB_VER="${SHLIB_VER}" \
		SHLIB_SHVER="${SHLIB_VER:R:R}"

.include <bsd.port.mk>
