# $FreeBSD$

PORTNAME=	libkvkontakte
PORTVERSION=	5.0.0
CATEGORIES=	net kde
DIST_SUBDIR=	KDE/digikam

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for accessing vk.com

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource gettext kde:5
USE_KDE=	config coreaddons ecm i18n kdewebkit kio service widgetsaddons
USE_QT5=	core gui network webkit widgets \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	b5d347c

.include <bsd.port.mk>
