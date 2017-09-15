# $FreeBSD: branches/plasma5/KDE/lang/kf5-kross/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kross
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	lang kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 multi-language application scripting

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons doctools ecm i18n iconthemes itemviews \
		jobwidgets kio parts service solid sonnet textwidgets \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build core dbus gui network qmake_build \
		script uiplugin uitools widgets xml

.include <bsd.port.mk>
