# $FreeBSD: head/sysutils/baloo-widgets/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	baloo-widgets
DISTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
PKGNAMESUFFIX=	-kde4
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The BalooWidgets library

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 baloo kfilemetadata
USE_QT4=	corelib qmake_build moc_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
