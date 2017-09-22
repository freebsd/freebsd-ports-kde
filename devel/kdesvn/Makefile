# $FreeBSD: branches/plasma5/PORTS/devel/kdesvn/Makefile 13476 2016-12-15 19:32:14Z tcberner $

PORTNAME=	kdesvn
DISTVERSION=	2.0.0
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}
CATEGORIES=	devel kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE frontend for Subversion

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libapr-1.so:devel/apr1 \
		libexpat.so:textproc/expat2 \
		libgdbm.so:databases/gdbm \
		libsvn_client-1.so:devel/subversion
RUN_DEPENDS=	git:devel/git

CONFLICTS_INSTALL=	kdesvn-1.7.0*

USES=		bdb cmake:outsource compiler:c++11-lang desktop-file-utils \
		gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons doctools ecm i18n iconthemes itemviews \
		jobwidgets kio notifications parts service sonnet texteditor \
		textwidgets wallet widgetsaddons xmlgui
USE_QT5=	core dbus gui network sql widgets xml \
		buildtools_build qmake_build

post-patch:
	${REINPLACE_CMD} -e 's#%%EXECINFO%%#${EXECINFO_LDFLAGS} -lexecinfo#' \
		${PATCH_WRKSRC}/src/svnqt/cmake/FindSubversion.cmake

.include <bsd.port.mk>
