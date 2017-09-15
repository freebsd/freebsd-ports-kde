# $FreeBSD: branches/plasma5/KDE/devel/lokalize/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	lokalize
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Computer-aided translation system

LIB_DEPENDS=	libhunspell-1.6.so:textproc/hunspell

USES=		cmake:outsource desktop-file-utils gettext kde:5 tar:xz
USE_KDE=	config coreaddons doctools ecm \
		i18n kio kross notifications \
		sonnet xmlgui
USE_QT5=	buildtools_build qmake_build sql

.include <bsd.port.mk>
