# $FreeBSD$

PORTNAME=	Kup
DISTVERSIONPREFIX=	${PORTNAME:tl}-
DISTVERSION=	0.7.1
CATEGORIES=	deskutils kde
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Kup Backup System

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:outsource kde:5 qt:5 ssl
USE_GITHUB=	yes
GH_ACCOUNT=	spersson
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons i18n iconthemes idletime itemviews \
		jobwidgets kio notifications package plasma-framework \
		service solid widgetsaddons xmlgui
USE_QT=		concurrent core dbus gui network widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
