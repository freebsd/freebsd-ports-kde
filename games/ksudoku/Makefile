# $FreeBSD: branches/plasma5/KDE/games/ksudoku/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	ksudoku
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:5 tar:xz
USE_GL=		gl glu
USE_KDE=	archive auth codecs completion config configwidgets \
		coreaddons crash ecm guiaddons i18n jobwidgets kio \
		libkdegames service widgetsaddons xmlgui
USE_QT5=	core dbus gui network opengl printsupport qml quick \
		svg widgets xml \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
