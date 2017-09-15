# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/deskutils/kcharselect/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kcharselect
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Character selector for KDE

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm bookmarks doctools i18n widgetsaddons xmlgui
USE_QT5=	buildtools_build qmake_build widgets

.include <bsd.port.mk>
