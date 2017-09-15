# $FreeBSD$

PORTNAME=	ktouch
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Touch typing tutor for KDE

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets coreaddons doctools ecm i18n itemviews \
		kcmutils kdeclarative kio newstuff parts texteditor \
		widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build gui network qmake_build qml quick script sql \
		testlib widgets x11extras xmlpatterns
USE_XORG=	xkbfile

.include <bsd.port.mk>
