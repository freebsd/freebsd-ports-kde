# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/x11-themes/kde4-base-artwork/Makefile 13715 2017-03-08 18:38:30Z tcberner $

PORTNAME=	kde-base-artwork
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-themes kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Base artwork for the KDE Plasma Desktop

LICENSE=	GPLv2

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	moc_build qmake_build rcc_build uic_build
NO_BUILD=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

.include <bsd.port.mk>
