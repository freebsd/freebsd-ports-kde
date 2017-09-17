# $FreeBSD: branches/plasma5/KDE/sysutils/baloo-widgets/Makefile 13779 2017-03-18 09:57:45Z tcberner $

PORTNAME=	baloo-widgets
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	BalooWidgets library

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 tar:xz
USE_KDE=	baloo config ecm emoticons filemetadata i18n init itemmodels \
		kdelibs4support kio service
USE_QT5=	buildtools_build core gui qmake_build testlib widgets
USE_LDCONFIG=	yes

.include <bsd.port.mk>
