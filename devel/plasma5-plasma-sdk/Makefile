# $FreeBSD: branches/plasma5/KDE/devel/plasma5-plasma-sdk/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	plasma-sdk
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	devel kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 applications useful for Plasma development

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	archive attica auth codecs completion config configwidgets \
		coreaddons dbusaddons ecm i18n iconthemes itemmodels \
		jobwidgets kdeclarative kio kirigami2 newstuff package parts \
		plasma-framework service sonnet texteditor textwidgets \
		widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network qmake_build qml quick \
		webkit widgets x11extras xml

.include <bsd.port.mk>
