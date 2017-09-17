# $FreeBSD: branches/plasma5/KDE/deskutils/plasma5-sddm-kcm/Makefile 13601 2017-01-16 23:00:36Z tcberner $

PORTNAME=	sddm-kcm
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	deskutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 config module for SDDM

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 cpe pkgconfig \
		tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons ecm \
		i18n jobwidgets kio newstuff service widgetsaddons xmlgui
USE_QT5=	buildtools_build core designer gui network qmake_build qml \
		quick uiplugin widgets x11extras xml
USE_XORG=	ice sm x11 xcb xcursor xext xfixes

.include <bsd.port.mk>
