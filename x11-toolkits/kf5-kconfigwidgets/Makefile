# $FreeBSD: branches/plasma5/KDE/x11-toolkits/kf5-kconfigwidgets/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kconfigwidgets
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 widgets for configuration dialogs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 shebangfix tar:xz
USE_KDE=	archive auth codecs config coreaddons doctools ecm guiaddons \
		i18n widgetsaddons
USE_QT5=	buildtools_build core dbus gui qmake_build widgets xml

SHEBANG_FILES=	src/preparetips5

.include <bsd.port.mk>
