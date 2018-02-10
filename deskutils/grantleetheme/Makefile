# $FreeBSD$

PORTNAME=	grantleetheme
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
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
