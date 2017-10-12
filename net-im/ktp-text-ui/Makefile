# $FreeBSD: branches/plasma5/KDE/net-im/ktp-text-ui/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	ktp-text-ui
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE chat window application

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libtelepathy-logger-qt.so:net-im/telepathy-logger-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals
RUN_DEPENDS=	${KDE_PREFIX}/bin/ktp-contactlist:net-im/ktp-contact-list

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 tar:xz
USE_KDE=	archive ecm emoticons i18n iconthemes itemviews kcmutils \
		kdewebkit kio notifications notifyconfig people service \
		sonnet textwidgets widgetsaddons windowsystem xmlgui
USE_QT5=	gui webengine  \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
