# $FreeBSD: branches/plasma5/KDE/games/kfourinline/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kfourinline
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons dbusaddons \
		dnssd ecm i18n iconthemes itemmodels itemviews \
		kdeclarative kdelibs4support kio libkdegames \
		notifyconfig xmlgui
USE_QT5=	buildtools_build core gui network qmake_build qml \
		quick svg widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
