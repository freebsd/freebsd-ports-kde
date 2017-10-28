# $FreeBSD: branches/plasma5/KDE/archivers/ark/Makefile 13829 2017-04-09 08:51:06Z tcberner $

PORTNAME=	ark
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	archivers kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Archiving tool for KDE

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource gettext libarchive kde:5 tar:xz
USE_KDE=	archive config crash dbusaddons doctools ecm i18n iconthemes itemmodels \
		khtml kio pty service widgetsaddons
USE_QT5=	buildtools_build core gui widgets qmake_build

USE_LDCONFIG=	yes

OPTIONS_DEFINE=	7ZIP RAR ZIP

7ZIP_DESC=	Support for 7-Zip archives
7ZIP_RUN_DEPENDS=	7z:archivers/p7zip

RAR_DESC=	Support for RAR archives
RAR_RUN_DEPENDS=	unrar:archivers/unrar \
			rar:archivers/rar

ZIP_DESC=	Support for ZIP archives
ZIP_RUN_DEPENDS=	unzip>0:archivers/unzip \
			zip:archivers/zip

.include <bsd.port.mk>
