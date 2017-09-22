# $FreeBSD$

PORTNAME=	kdevplatform
DISTVERSION=	5.1.2
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/kdevelop/${PORTVERSION}/src
DIST_SUBDIR=	KDE/kdevelop

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of libraries for KDE IDE-like programs

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING.SRC

LIB_DEPENDS=	libapr-1.so:devel/apr1 \
		libsvn_client-1.so:devel/subversion \
		libboost_thread.so:devel/boost-libs \
		libkomparediff2.so:textproc/libkomparediff2

USE_KDE=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons guiaddons i18n iconthemes itemmodels \
		itemviews jobwidgets kcmutils kdeclarative kio newstuff \
		notifications notifyconfig package parts service solid sonnet \
		texteditor textwidgets threadweaver widgetsaddons windowsystem \
		xmlgui
USE_QT5=	concurrent core dbus gui network qml quick script testlib \
		webkit widgets xml buildtools_build qmake_build
USES=		cmake:outsource compiler:c++11-lib gettext grantlee:5 kde:5 \
		shebangfix tar:xz
USE_LDCONFIG=	yes

CONFLICTS=	kdevplatform-kde4-1* kdevplatform-1*

SHEBANG_FILES=	util/kdevplatform_shell_environment.sh \
		util/.zshrc

SHEBANG_LANG=	zsh
zsh_OLD_CMD=	/bin/zsh
zsh_CMD=	${LOCALBASE}/bin/zsh

PLIST_SUB+=	SHLIB_VER=10.0.0 \
		SHLIB_SHVER=10

.include <bsd.port.mk>
