# Created by: Rusty Nejdl <rnejdl@ringofsaturn.com>
# $FreeBSD: branches/plasma5/KDE/sysutils/filelight-kf5/Makefile 13710 2017-03-08 18:32:37Z tcberner $

PORTNAME=	filelight
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Map of concentric segmented-rings representing file system

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	coreaddons doctools ecm i18n kio parts solid xmlgui
USE_QT5=	buildtools_build core dbus qmake_build script widgets

.include <bsd.port.mk>
