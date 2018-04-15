# $FreeBSD$

PORTNAME=	kdeconnect-kde
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2.1
PORTREVISION=	1
CATEGORIES=	deskutils kde
MASTER_SITES=	KDE/stable/kdeconnect/${DISTVERSION}/src/
PKGNAMESUFFIX=	-kf5
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Support for KDE to interface between your phone and your computer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfakekey.so:x11/libfakekey \
		libqca-qt5.so:devel/qca@@t5
RUN_DEPENDS=	sshfs:sysutils/fusefs-sshfs

CONFLICTS_INSTALL=	kdeconnect-kde-0.7*

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 \
		pkgconfig tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons doctools ecm i18n iconthemes \
		itemviews jobwidgets kcmutils kio notifications service \
		solid wayland widgetsaddons xmlgui
USE_QT5=	buildtools_build core dbus gui network qmake_build qml quick \
		testlib widgets x11extras xml
USE_XORG=	ice sm x11 xext xtst
USE_LDCONFIG=	${QT_QMLDIR}/org/kde/kdeconnect

.include <bsd.port.mk>

