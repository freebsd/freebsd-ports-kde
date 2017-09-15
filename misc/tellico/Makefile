# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD$

PORTNAME=	tellico
DISTVERSION=	3.0.2
CATEGORIES=	misc kde
MASTER_SITES=	http://tellico-project.org/files/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Collection manager for KDE

LICENSE=	GPLv2

LIB_DEPENDS=	libexempi.so:textproc/exempi \
		libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error \
		libpoppler-qt5.so:graphics/poppler-qt5 \
		libtag.so:audio/taglib \
		libyaz.so:net/yaz

USES=		cmake:outsource desktop-file-utils gettext kde:5 pkgconfig \
		python:run shared-mime-info shebangfix tar:xz
USE_GNOME=	libxml2 libxslt
USE_KDE=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons crash ecm filemetadata guiaddons \
		i18n iconthemes itemmodels itemviews jobwidgets js khtml kio \
		libkcddb libksane newstuff parts service solid sonnet \
		textwidgets wallet widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network widgets xml \
		buildtools_build qmake_build

SHEBANG_FILES=	src/core/tellico-1-3-update.pl \
		src/fetch/scripts/dark_horse_comics.py \
		src/fetch/scripts/fr.allocine.py

.include <bsd.port.mk>
