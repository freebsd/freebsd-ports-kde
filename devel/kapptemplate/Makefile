# $FreeBSD: branches/plasma5/KDE/devel/kapptemplate/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kapptemplate
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE template generator

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	archive completion configwidgets coreaddons doctools ecm \
		i18n kio newstuff
USE_QT5=	buildtools_build core gui qmake_build testlib

.include <bsd.port.mk>
