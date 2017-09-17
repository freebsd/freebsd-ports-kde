# $FreeBSD: branches/plasma5/KDE/security/kgpg/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	kgpg
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	security kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Encryption tool for KDE

RUN_DEPENDS=	gpg2:security/gnupg

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	akonadicontacts archive codecs config contacts coreaddons \
		crash dbusaddons doctools ecm i18n iconthemes jobwidgets kio \
		notifications service textwidgets widgetsaddons xmlgui
USE_QT5=	buildtools_build dbus gui printsupport qmake_build

.include <bsd.port.mk>
