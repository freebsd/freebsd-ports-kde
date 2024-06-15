PORTNAME=	libkomparediff2
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	textproc kde kde-applications
PKGNAMESUFFIX=	-${FLAVOR}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library to compare files and strings
WWW=		https://www.kde.org

FLAVORS=	qt5 # qt6
FLAVOR?=	qt5

USES=		cmake compiler:c++11-lang gettext kde:${FLAVOR:S/qt//} \
		qt:${FLAVOR:S/qt//} tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons i18n kio parts \
		service widgetsaddons xmlgui \
		ecm:build
_USE_QT_qt5=	concurrent core dbus gui network widgets xml \
		buildtools:build qmake:build
_USE_QT_qt6=		base
USE_QT=		${_USE_QT_${FLAVOR}}
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

_PLIST_SUB_qt5=	QT5_ONLY=""
_PLIST_SUB_qt6=	QT5_ONLY="@comment "
PLIST_SUB=	${_PLIST_SUB_${FLAVOR}} \
		QT_VER=${FLAVOR:S/qt//}


.include <bsd.port.mk>
