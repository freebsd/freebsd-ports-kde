# $FreeBSD$

PORTNAME=	kfilereplace
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	A very capable multi-line, mutli-file, multi-directory find and replace

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs runtime soprano
USE_QT4=	corelib dbus gui network qt3support svg xml \
		moc_build porting_build qmake_build rcc_build uic_build \
		uic3_build

.include <bsd.port.mk>
