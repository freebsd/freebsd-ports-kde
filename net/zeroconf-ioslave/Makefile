# $FreeBSD$

PORTNAME=	zeroconf-ioslave
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Network monitor for DNS-SD services (Zeroconf)

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus gui network svg xml \
		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
