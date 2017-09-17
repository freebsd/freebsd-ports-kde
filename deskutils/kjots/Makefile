# $FreeBSD: branches/plasma5/KDE/deskutils/kjots/Makefile 13967 2017-04-26 17:48:42Z tcberner $

PORTNAME=	kjots
PORTVERSION=	5.0.2
CATEGORIES=	deskutils kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE note taking application

LICENSE=	GPLv2

CONFLICTS=	kdepim4-4.*

USES=		cmake:outsource gettext grantlee:5 kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons ecm i18n itemmodels jobwidgets kcmutils kio parts \
		service sonnet textwidgets widgetsaddons xmlgui \
		akonadi akonadinotes mime kontactinterface pimtextedit
USE_QT5=	buildtools_build core dbus gui network printsupport \
		qmake_build widgets xml

.include <bsd.port.mk>
