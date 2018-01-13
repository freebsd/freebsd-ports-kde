# $FreeBSD: branches/plasma5/KDE/math/rocs/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	rocs
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Graph theory IDE

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs

USES=		cmake:outsource gettext grantlee:5 kde:5 tar:xz
USE_KDE=	ecm doctools config coreaddons kdeclarative texteditor
USE_QT5=	buildtools_build core qmake_build quick scripttools svg webkit

USE_LDCONFIG=	yes

# clang 6.0 defaults to -std=gnu++14, which breaks the build:
# /wrkdirs/usr/ports/math/rocs/work/rocs-4.14.3/VisualEditor/Actions/SelectMoveHandAction.cpp:86:52: error: no viable conversion from 'int' to 'QPainter::RenderHints' (aka 'QFlags<QPainter::RenderHint>')
#         _graphScene->views().at(0)->setRenderHints(QPainter::Antialiasing
USE_CXXSTD=	gnu++98

.include <bsd.port.mk>
