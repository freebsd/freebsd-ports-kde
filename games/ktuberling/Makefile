# $FreeBSD: branches/plasma5/KDE/games/ktuberling/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	ktuberling
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons dbusaddons ecm emoticons \
		i18n init itemmodels kdelibs4support kio libkdegames \
		newstuff notifyconfig textwidgets widgetsaddons \
		windowsystem xmlgui
USE_QT5=	buildtools_build core gui network phonon4 qmake_build qml \
		quick svg testlib widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
