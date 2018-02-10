# $FreeBSD$

PORTNAME=	ksystemlog
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE system log application

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_KDE=	archive completion config coreaddons doctools ecm i18n \
		iconthemes itemviews kio textwidgets widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui printsupport qmake_build \
		testlib widgets

.include <bsd.port.mk>
