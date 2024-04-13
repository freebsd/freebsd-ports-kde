PORTNAME=	kirigami-addons
DISTVERSION=	1.1.0
CATEGORIES=	x11-toolkits kde
MASTER_SITES=	KDE/stable/${PORTNAME}/
DIST_SUBDIR=	KDE
PKGNAMESUFFIX=	-qt6

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Component library for KDE Kirigami
WWW=		https://api.kde.org/frameworks/kirigami-addons/html/

LICENSE=	LGPL20

USES=		cmake compiler:c++11-lib gettext kde:6 qt:6 tar:xz
USE_KDE=	i18n kirigami2 \
		ecm:build
USE_QT=		base declarative

.include <bsd.port.mk>
