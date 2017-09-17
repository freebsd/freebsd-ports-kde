# $FreeBSD: branches/plasma5/KDE/sysutils/kf5-baloo/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	baloo
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	sysutils kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 Framework for searching and managing user metadata

LIB_DEPENDS=	liblmdb.so:databases/lmdb \
		libinotify.so:devel/libinotify

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pathfix tar:xz
USE_KDE=	auth completion config coreaddons crash dbusaddons \
		filemetadata i18n idletime jobwidgets kio service \
		solid widgetsaddons
USE_QT5=	buildtools_build core dbus gui network qmake_build \
		qml quick testlib widgets

# Frameworks ports install localization files that conflict with some
# KDE4 localization ports
CONFLICTS_INSTALL=	baloo-4.* \
			kde4-l10n-*

.include <bsd.port.mk>
