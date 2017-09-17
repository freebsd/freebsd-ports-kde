# $FreeBSD: branches/plasma5/KDE/sysutils/kcron/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kcron
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE task scheduler

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm doctools i18n iconthemes kio xmlgui
USE_QT5=	buildtools_build printsupport qmake_build widgets

.include <bsd.port.mk>
