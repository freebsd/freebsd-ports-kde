PORTNAME=	file-roller
PORTVERSION=	44.5
PORTEPOCH=	1
CATEGORIES=	archivers gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Archive manager for zip files, tar, etc
WWW=		https://wiki.gnome.org/Apps/FileRoller

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool
LIB_DEPENDS=	libjson-glib-1.0.so:devel/json-glib \
		libnotify.so:devel/libnotify \
		libhandy-1.so:x11-toolkits/libhandy \
		libportal.so:deskutils/libportal \
		libportal-gtk4.so:deskutils/libportal-gtk4
RUN_DEPENDS=	gtar:archivers/gtar

PORTSCOUT=	limitw:1,even

USES=		cpe desktop-file-utils gettext gnome libarchive localbase \
		meson pkgconfig python:build tar:xz
USE_GNOME=	cairo gdkpixbuf gtk40 libadwaita
USE_LDCONFIG=	yes
MESON_ARGS=	-Dpackagekit=false
BINARY_ALIAS=	python3=${PYTHON_VERSION}
CPE_VENDOR=	gnome

GLIB_SCHEMAS=	org.gnome.FileRoller.gschema.xml

OPTIONS_SUB=	yes
OPTIONS_DEFINE=	NAUTILUS
OPTIONS_DEFAULT=NAUTILUS

OPTIONS_GROUP=	FORMATS
OPTIONS_GROUP_FORMATS=	7ZIP ARJ LZO RAR ZIP

FORMATS_DESC=	Additional compression formats support

7ZIP_DESC=	7zip archive support
7ZIP_RUN_DEPENDS=	7zz:archivers/7-zip

ARJ_DESC=	ARJ archive support
ARJ_RUN_DEPENDS=	arj:archivers/arj

LZO_RUN_DEPENDS=	lzop:archivers/lzop

RAR_DESC=	RAR archive support
RAR_RUN_DEPENDS=	rar:archivers/rar \
			unrar:archivers/unrar

ZIP_DESC=	ZIP archive support
ZIP_RUN_DEPENDS=	zip:archivers/zip

NAUTILUS_DESC=	Nautilus context menu actions
NAUTILUS_USE=	GNOME=nautilus4
NAUTILUS_MESON_ENABLED=	nautilus-actions

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/src/fr-command-tar.c \
		${WRKSRC}/src/fr-command-zip.c
	@${REINPLACE_CMD} -e 's|"7z"|"7zz"|g' \
		${WRKSRC}/src/fr-archive-libarchive.c \
		${WRKSRC}/src/fr-command-7z.c \
		${WRKSRC}/src/fr-command-tar.c

.include <bsd.port.mk>
