# $FreeBSD: branches/plasma5/KDE/games/khangman/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	khangman
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Hangman game for KDE 4

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons \
		crash doctools ecm i18n kdeclarative \
		libkeduvocdocument newstuff notifications xmlgui
USE_QT5=	buildtools_build core gui network qmake_build \
		qml quick svg widgets
USE_LDCONFIG=	yes

.include <bsd.port.mk>
