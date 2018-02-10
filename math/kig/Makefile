# $FreeBSD$

PORTNAME=	kig
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE interactive geometry application

LIB_DEPENDS=	libboost_python.so:devel/boost-python-libs

USES=		cmake:outsource gettext compiler:c++11-lib kde:5 python:run shebangfix tar:xz
USE_KDE=	archive configwidgets doctools ecm emoticons \
		i18n iconthemes init itemmodels kdelibs4support \
		parts texteditor xmlgui
USE_QT5=	buildtools_build core gui printsupport qmake_build svg widgets
SHEBANG_FILES=	pykig/pykig.py

.include <bsd.port.mk>
