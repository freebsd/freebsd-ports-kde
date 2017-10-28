# $FreeBSD: branches/plasma5/KDE/math/kbruch/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kbruch
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 application to exercise fractions

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm config crash doctools i18n xmlgui
USE_QT5=	buildtools_build qmake_build widgets

.include <bsd.port.mk>
