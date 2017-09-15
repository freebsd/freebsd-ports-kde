# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/security/kwalletmanager-kde4/Makefile 13743 2017-03-10 23:32:54Z tcberner $

PORTNAME=	kwalletmanager
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PKGNAMESUFFIX=	-kde4
CATEGORIES=	security kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Password manager for KDE

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	corelib dbus gui network svg xml \
		qmake_build moc_build rcc_build uic_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.04.3

.include <bsd.port.mk>
