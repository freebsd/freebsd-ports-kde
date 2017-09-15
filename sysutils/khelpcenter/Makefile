# $FreeBSD: branches/plasma5/KDE/sysutils/khelpcenter/Makefile 13916 2017-04-20 18:30:09Z tcberner $

PORTNAME=	khelpcenter
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications # kde kde-applications-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 application to show KDE application documentation

LIB_DEPENDS=	libxapian.so:databases/xapian-core

USES=		cmake:outsource compiler:c++11-lib cpe gettext grantlee:5 \
		kde:5 shebangfix tar:xz
USE_KDE=	config coreaddons dbusaddons ecm emoticons i18n init \
		itemmodels itemviews kcmutils kdelibs4support \
		khtml service
USE_QT5=	buildtools_build core dbus gui qmake_build widgets xml
SHEBANG_FILES=	searchhandlers/khc_mansearch.pl

.include <bsd.port.mk>
