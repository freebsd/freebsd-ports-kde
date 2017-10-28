# $FreeBSD: branches/plasma5/KDE/graphics/kimagemapeditor/Makefile 13839 2017-04-10 09:36:18Z tcberner $

PORTNAME=	kimagemapeditor
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE generator of HTML image maps

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs soprano
USE_QT4=	corelib dbus gui network phonon qt3support svg xml \
		moc_build uic_build qmake_build rcc_build

.include <bsd.port.mk>
