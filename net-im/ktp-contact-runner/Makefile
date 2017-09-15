# $FreeBSD: branches/plasma5/KDE/net-im/ktp-contact-runner/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-contact-runner
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KRunner integration module for KDE Telepathy

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm i18n service runner
USE_QT5=	buildtools_build core qmake_build

.include <bsd.port.mk>
