# $FreeBSD: branches/plasma5/KDE/textproc/kompare/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kompare
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	textproc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Diff/Patch Frontend

LIB_DEPENDS=	libkomparediff2.so:textproc/libkomparediff2

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm codecs doctools config coreaddons texteditor
USE_QT5=	buildtools_build qmake_build

.include <bsd.port.mk>
