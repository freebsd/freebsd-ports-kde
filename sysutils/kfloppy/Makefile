# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/sysutils/kfloppy/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kfloppy
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Floppy disk formatter for KDE

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	coreaddons doctools ecm emoticons i18n init itemmodels \
		kdelibs4support kio xmlgui
USE_QT5=	buildtools_build core dbus gui qmake_build widgets

.include <bsd.port.mk>
