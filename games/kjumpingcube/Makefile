# $FreeBSD$

PORTNAME=	kjumpingcube
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons ecm guiaddons i18n \
		iconthemes itemviews kio libkdegames newstuff notifyconfig \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build gui qmake_build qml quick widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
