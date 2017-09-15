# $FreeBSD: branches/plasma5/KDE/devel/dolphin-plugins/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	dolphin-plugins
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plugins for Dolphin file manager

BUILD_DEPENDS=	dolphin:x11-fm/dolphin
RUN_DEPENDS=	dolphin:x11-fm/dolphin

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm emoticons i18n init itemmodels itemviews kio \
		kdelibs4support xmlgui
USE_QT5=	buildtools_build core network qmake_build widgets

.include <bsd.port.mk>
