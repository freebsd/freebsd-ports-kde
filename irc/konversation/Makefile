# $FreeBSD: branches/plasma5/PORTS/irc/konversation/Makefile 13758 2017-03-12 00:04:19Z tcberner $

PORTNAME=	konversation
PORTVERSION=	1.6.2
CATEGORIES=	irc kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION}/src
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	User friendly IRC client for KDE

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libqca-qt5.so:devel/qca-qt5

USES=		cmake:outsource gettext kde:5 shebangfix tar:xz
USE_KDE=	archive bookmarks config configwidgets coreaddons dbusaddons \
		doctools ecm emoticons globalaccel i18n iconthemes idletime \
		itemviews kio notifications notifyconfig parts solid sonnet \
		wallet widgetsaddons windowsystem
USE_QT5=	buildtools_build core gui phonon4 qmake_build widgets

SHEBANG_FILES=	data/scripts/mail \
		data/updaters/*.pl

.include <bsd.port.mk>
