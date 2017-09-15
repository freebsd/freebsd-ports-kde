# $FreeBSD: branches/plasma5/KDE/astro/marble/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	marble
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	astro kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Virtual globe and world atlas for KDE

LIB_DEPENDS=	libquazip5.so:archivers/quazip-qt5

USES=		cmake:outsource desktop-file-utils gettext kde:5 tar:xz
USE_KDE=	attica auth codecs completion config configwidgets coreaddons \
		crash doctools ecm i18n jobwidgets kio newstuff package parts \
		plasma-framework runner service sonnet textwidgets wallet \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build concurrent core dbus designer \
		gui location network opengl phonon4 printsupport qmake_build \
		qml quick script sql svg webkit widgets xml

USE_LDCONFIG=	yes
MAKE_ENV=	XDG_CONFIG_HOME=/dev/null
# We have to set QT_IMPORTS_PATH, as it does not get picked up
CMAKE_ARGS=	-DMOBILE:BOOL=FALSE \
		-DQT_IMPORTS_DIR:PATH=${QT_IMPORTDIR}

OPTIONS_DEFINE=	GPS
OPTIONS_DEFAULT=GPS
OPTIONS_SUB=	yes

GPS_DESC=		Support for GPS position provider
GPS_LIB_DEPENDS=	libgps.so:astro/gpsd
GPS_CMAKE_OFF=		-DWITH_libgps:BOOL=FALSE

.include <bsd.port.mk>
