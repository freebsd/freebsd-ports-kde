# $FreeBSD$

PORTNAME=	kmouth
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	accessibility kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Speech synthesizer frontend for KDE

USES=		cmake:outsource kde:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		ecm i18n jobwidgets kio service widgetsaddons xmlgui
USE_QT5=	core dbus gui network printsupport speech widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
