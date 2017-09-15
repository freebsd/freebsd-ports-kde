# $FreeBSD$

PORTNAME=	kmozillahelper
DISTVERSION=	5.0.1
DISTVERSIONPREFIX=	v
CATEGORIES=	www kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE mozilla integration

LICENSE=	MIT
LICENSE_FILES=	${WRKSRC}/LICENSE

USES=		cmake:outsource kde:5
USE_KDE=        completion config coreaddons i18n jobwidgets kio notifications \
		service widgetsaddons windowsystem
USE_QT5=        core gui network widgets \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	openSUSE

.include <bsd.port.mk>
