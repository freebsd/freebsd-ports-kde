# $FreeBSD: branches/plasma5/KDE/net/pimcommon/Makefile 13959 2017-04-26 14:27:50Z tcberner $

PORTNAME=	pimcommon
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Common libriares for KDEPim

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	archive codecs config dbusaddons ecm emoticons i18n init \
		itemmodels kdelibs4support newstuff sonnet textwidgets wallet \
		xmlgui
# pim components
USE_KDE+=	akonadi contacts imap  libkdepim mime \
		pimtextedit
USE_QT5=	buildtools_build designer gui network qmake_build script \
		testlib uiplugin uitools webkit widgets
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
