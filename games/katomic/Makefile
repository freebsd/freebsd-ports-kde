# $FreeBSD$

PORTNAME=	katomic
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications
MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 shebangfix tar:xz
USE_KDE=	config configwidgets coreaddons ecm guiaddons i18n \
		iconthemes itemviews kio libkdegames newstuff \
		notifyconfig widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui qmake_build qml quick widgets
SHEBANG_FILES=	katomic-levelset-upd.pl

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
