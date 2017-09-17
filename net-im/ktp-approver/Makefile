# $FreeBSD: branches/plasma5/KDE/net-im/ktp-approver/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-approver
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging notifier

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals
RUN_DEPENDS=	${KDE_PREFIX}/bin/ktp-contactlist:net-im/ktp-contact-list

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm dbusaddons service i18n notifications
USE_QT5=	buildtools_build core qmake_build

.include <bsd.port.mk>
