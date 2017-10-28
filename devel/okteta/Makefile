# $FreeBSD: branches/plasma5/KDE/devel/okteta/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	okteta
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE hex editor

LIB_DEPENDS=	libqca-qt5.so:devel/qca-qt5

USES=		cmake:outsource gettext kde:5 shared-mime-info tar:xz
USE_KDE=	attica auth bookmarks codecs completion \
		config configwidgets coreaddons dbusaddons doctools \
		ecm i18n iconthemes itemviews jobwidgets kcmutils kio \
		newstuff parts service solid sonnet textwidgets \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build core dbus designer \
		gui network printsupport \
		qmake_build script scripttools widgets xml
USE_LDCONFIG=	yes

.include <bsd.port.mk>
