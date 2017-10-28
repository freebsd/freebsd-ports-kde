# $FreeBSD: branches/plasma5/KDE/net/kpimtextedit/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	kpimtextedit
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for PIM-specific text editing utilities

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext grantlee:5 kde:5 tar:xz
USE_KDE=	ecm emoticons i18n init itemmodels itemviews kdelibs4support \
		kio sonnet syntaxhighlighting textwidgets
USE_QT5=	buildtools_build core qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
