PORTNAME=	kxmlgui
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 user configurable main windows

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	attica5 auth codecs config configwidgets coreaddons \
		globalaccel i18n iconthemes itemviews sonnet textwidgets \
		widgetsaddons windowsystem \
		ecm_build
USE_QT=		core dbus gui network printsupport widgets xml \
		buildtools_build qmake_build 

.include <bsd.port.mk>
