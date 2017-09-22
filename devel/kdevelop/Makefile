# $FreeBSD$

PORTNAME=	kdevelop
DISTVERSION=	5.1.2
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/kdevelop/${PORTVERSION}/src
DIST_SUBDIR=	KDE/kdevelop

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plugin extensible IDE for KDE

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	kdev-pg-qt:devel/kdevelop-pg-qt
LIB_DEPENDS=	libKDevPlatformInterfaces.so:devel/kdevplatform \
		libkasten3controllers.so:devel/okteta
RUN_DEPENDS=	gmake:devel/gmake

USE_KDE=	archive attica auth codecs completion config configwidgets \
		coreaddons crash guiaddons emoticons i18n iconthemes init \
		itemmodels itemviews jobwidgets kcmutils kdeclarative \
		kdelibs4support kio libksysguard newstuff notifications \
		notifyconfig package parts plasma-desktop plasma-framework \
		runner service sonnet texteditor textwidgets threadweaver \
		widgetsaddons windowsystem xmlgui
USE_QT5=	concurrent core dbus gui help network qml quick \
		script webkit widgets xml buildtools_build qmake_build
USES=		cmake:outsource compiler:c++11-lib desktop-file-utils \
		gettext kde:5 shared-mime-info tar:xz

CONFLICTS=	kdevelop-kde4-4* kdevelop-4*

.include <bsd.port.mk>
