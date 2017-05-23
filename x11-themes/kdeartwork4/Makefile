# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/x11-themes/kdeartwork4/Makefile 420774 2016-08-24 08:20:31Z tcberner $

IGNORE=		kde4-workspace is EOL

PORTNAME=	kdeartwork
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-themes kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Artworks Themes

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/eigen3.pc:math/eigen3

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libkexiv2 workspace automoc4
USE_QT4=	corelib gui opengl \
		moc_build qmake_build rcc_build uic_build
USE_XORG=	x11 xt

OPTIONS_DEFINE=	GNOME
GNOME_DESC=	Use Gnome screensavers
GNOME_BUILD_DEPENDS=	${LOCALBASE}/share/applications/xscreensaver-properties.desktop:x11/xscreensaver-gnome
GNOME_RUN_DEPENDS=	${GNOME_BUILD_DEPENDS}
GNOME_BUILD_DEPENDS_OFF=	xscreensaver:x11/xscreensaver
GNOME_RUN_DEPENDS_OFF=		${GNOME_BUILD_DEPENDS_OFF}

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.3

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local/|${LOCALBASE}|g' \
			-e 's|/usr/share|${LOCALBASE}/share|g' \
		${PATCH_WRKSRC}/cmake/modules/FindXscreensaver.cmake

.include <bsd.port.mk>
