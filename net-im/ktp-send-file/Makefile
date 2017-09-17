# $FreeBSD: branches/plasma5/KDE/net-im/ktp-send-file/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-send-file
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging file transfer application

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals
RUN_DEPENDS=	${KDE_PREFIX}/lib/libexec/ktp-filetransfer-handler:net-im/ktp-filetransfer-handler \
		${KDE_PREFIX}/bin/ktp-contactlist:net-im/ktp-contact-list

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm i18n iconthemes kcmutils kio
USE_QT5=	buildtools_build core gui qmake_build widgets

.include <bsd.port.mk>
