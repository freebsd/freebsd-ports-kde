# $FreeBSD: head/graphics/kqtquickcharts/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	kqtquickcharts
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	QtQuick plugin to render interactive charts

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus declarative gui script svg \
		moc_build qmake_build rcc_build uic_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.04.3

.include <bsd.port.mk>
