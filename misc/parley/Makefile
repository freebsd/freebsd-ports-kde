# $FreeBSD: branches/plasma5/KDE/misc/parley/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	parley
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Vocabulary trainer for KDE

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_GNOME=	libxml2 libxslt
USE_KDE=	ecm doctools coreaddons config crash i18n kio \
		newstuff notifications kross khtml sonnet \
		kcmutils xmlgui \
		libkeduvocdocument
USE_QT5=	buildtools_build concurrent core gui network \
		multimedia qmake_build svg widgets
USE_XORG=	x11 xrender

.include <bsd.port.mk>
