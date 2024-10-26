PORTNAME=	kde-gtk-config
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-themes kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Syncs KDE settings to GTK applications

PATCH_SITES=	https://invent.kde.org/plasma/${PORTNAME}/commit/
PATCHFILES=	d23cc1f74c26783b3d652c736f4c1df7cb828e76.patch:-p1

BUILD_DEPENDS=	gsettings-desktop-schemas>=0:devel/gsettings-desktop-schemas \
		sassc:textproc/sassc
LIB_DEPENDS=	libharfbuzz.so:print/harfbuzz
RUN_DEPENDS=	gsettings-desktop-schemas>=0:devel/gsettings-desktop-schemas

USES=		cmake gl gnome kde:6 pkgconfig qt:6 tar:xz xorg
USE_GL=		gl opengl
USE_XORG=	x11
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk20 gtk30
USE_KDE=	colorscheme config configwidgets coreaddons dbusaddons \
		decoration guiaddons widgetsaddons windowsystem \
		ecm:build
USE_QT=		base svg

.include <bsd.port.mk>
