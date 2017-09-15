# $FreeBSD: branches/plasma5/KDE/multimedia/plasma5-plasma-mediacenter/Makefile 13779 2017-03-18 09:57:45Z tcberner $

PORTNAME=	plasma-mediacenter
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	multimedia kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Plasma mediacenter

LIB_DEPENDS=	libtag.so:audio/taglib

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	activities baloo completion config configwidgets coreaddons \
		ecm filemetadata guiaddons i18n jobwidgets kio \
		plasma-framework service widgetsaddons windowsystem
USE_QT5=	buildtools_build core dbus gui multimedia network \
		qmake_build qml quick sql testlib widgets xml

# TODO
# Mediacenter is no longer part of KDE Plasma. 
# In the future once there is a new tarball, the
# port can be renamed. For now, just fetch the
# last distfile from the Plasma distribution.
# Also drop it from kde.mk then.
KDE_PLASMA_VERSION=	5.7.3
KDE_PLASMA_BRANCH=	stable

.include <bsd.port.mk>
