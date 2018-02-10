# $FreeBSD$

PORTNAME=	kbounce
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons dbusaddons \
		ecm guiaddons i18n iconthemes kio libkdegames notifyconfig \
		textwidgets widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui phonon4 qmake_build \
		qml quick svg testlib widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
