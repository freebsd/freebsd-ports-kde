# $FreeBSD: branches/plasma5/KDE/games/kpat/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kpat
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 shared-mime-info tar:xz
USE_KDE=	completion config configwidgets coreaddons dbusaddons \
		ecm guiaddons i18n iconthemes itemviews kdeclarative \
		kio libkdegames newstuff notifyconfig textwidgets \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui network phonon4 \
		qmake_build qml quick svg widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
