# $FreeBSD: branches/plasma5/KDE/x11-themes/plasma5-kde-gtk-config/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kde-gtk-config
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-themes kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 GTK2 and GTK3 configurator

USES=		cmake:outsource compiler:c++11-lib cpe gettext \
		kde:5 pkgconfig tar:xz
USE_GNOME=	cairo gdkpixbuf2 gtk20 gtk30 glib20
USE_KDE=	archive attica auth codecs completion config configwidgets \
		coreaddons ecm i18n iconthemes jobwidgets kcmutils kio \
		newstuff service widgetsaddons xmlgui
USE_QT5=	buildtools_build core dbus gui network qmake_build testlib \
		widgets xml
USE_XORG=	xcursor

.include <bsd.port.mk>
