# $FreeBSD: branches/plasma5/KDE/japanese/kiten/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kiten
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	japanese kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Japanese reference/study tool for KDE

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	archive completion config configwidgets coreaddons \
		doctools ecm khtml xmlgui
USE_QT5=	core buildtools_build qmake_build widgets
USE_LDCONFIG=	yes

.include <bsd.port.mk>
