# $FreeBSD: branches/plasma5/KDE/games/kshisen/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kshisen
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

LIB_DEPENDS=	libKF5KMahjongglib.so:games/libkmahjongg

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons dnssd ecm \
		i18n kdeclarative kio libkdegames newstuff widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui qmake_build svg widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
