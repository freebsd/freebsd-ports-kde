# $FreeBSD: branches/plasma5/KDE/x11/konsole/Makefile 13957 2017-04-26 14:25:40Z tcberner $

PORTNAME=	konsole
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11 kde kde-applications # kde kde-applications-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE terminal emulator

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml
RUN_DEPENDS=	keditbookmarks:deskutils/keditbookmarks

USES=		cmake:outsource gettext pkgconfig kde:5 tar:xz
USE_QT5=	buildtools_build core dbus gui qmake_build script scripttools \
		sql widgets
USE_KDE=	ecm emoticons i18n iconthemes init itemmodels \
		kdelibs4support kio notifications \
		notifyconfig parts pty service textwidgets \
		widgetsaddons windowsystem xmlgui

.include <bsd.port.mk>
