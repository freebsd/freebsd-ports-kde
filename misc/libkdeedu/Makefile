# $FreeBSD: branches/plasma5/KDE/misc/libkdeedu/Makefile 13352 2016-11-10 20:31:34Z tcberner $

PORTNAME=	libkdeedu
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries used by KDE educational applications

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus gui network svg xml \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

.include <bsd.port.mk>
