# $FreeBSD: branches/plasma5/KDE/graphics/okular/Makefile 13698 2017-03-08 17:47:13Z tcberner $

PORTNAME=	okular
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE universal document viewer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libchm.so:misc/chmlib \
		libdjvulibre.so:graphics/djvulibre \
		libepub.so:textproc/ebook-tools \
		libqmobipocket.so:graphics/kdegraphics-mobipocket \
		libpoppler-qt5.so:graphics/poppler-qt5 \
		libqca-qt5.so:devel/qca-qt5 \
		libspectre.so:print/libspectre \
		libtiff.so:graphics/tiff

USES=		cmake:outsource compiler:c++11-lib desktop-file-utils \
		gettext jpeg kde:5 pkgconfig tar:xz
USE_KDE=	activities archive bookmarks config configwidgets coreaddons \
		dbusaddons js kdelibs4support khtml kio libkexiv2 parts pty \
		threadweaver wallet emoticons itemmodels init ecm libkscreen
USE_QT5=	core dbus gui network printsupport qml quick svg \
		widgets buildtools_build qmake_build

.include <bsd.port.mk>
