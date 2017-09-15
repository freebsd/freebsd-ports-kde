# $FreeBSD: branches/plasma5/KDE/security/libkleo/Makefile 13916 2017-04-20 18:30:09Z tcberner $

PORTNAME=	libkleo
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	security kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Certificate manager for KDE

LIB_DEPENDS=	libgpgme.so:security/gpgme \
		libqgpgme.so:security/gpgme-qt5 \
		libgpgmepp.so:security/gpgme-cpp
RUN_DEPENDS=	${LOCALBASE}/bin/gmd5sum:sysutils/coreutils


USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config coreaddons i18n widgetsaddons windowsystem \
		pimtextedit
USE_QT5=	buildtools_build qmake_build widgets

post-extract:
# use the binaries of coreutils
	${REINPLACE_CMD} -e '/create-command/ s#sha1sum#gsha1sum#' \
			 -e '/create-command/ s#md5sum#gmd5sum#' \
			 -e '/verify-command/ s#sha1sum#gsha1sum#' \
			 -e '/verify-command/ s#md5sum#gmd5sum#' \
		${PATCH_WRKSRC}/src/libkleopatrarc.desktop

.include <bsd.port.mk>
