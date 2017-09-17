# $FreeBSD: branches/plasma5/KDE/deskutils/grantleetheme/Makefile 13916 2017-04-20 18:30:09Z tcberner $

PORTNAME=	grantleetheme
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE PIM grantleetheme

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext grantlee:5 kde:5 \
		pkgconfig tar:xz
USE_KDE=	ecm i18n iconthemes newstuff
USE_QT5=	buildtools_build gui network qmake_build testlib widgets
USE_LDCONFIG=	yes


.include <bsd.port.mk>
