PORTNAME=	kommit
DISTVERSION=	1.0.2
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Git gui client for KDE
WWW=		https://apps.kde.org/kommit/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake desktop-file-utils gettext kde:5 qt:5 tar:xz xorg
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons ecm i18n itemviews jobwidgets kio \
		parts service solid sonnet syntaxhighlighting texteditor \
		textwidgets widgetsaddons windowsystem xmlgui doctools:build
USE_LDCONFIG=	yes
USE_QT=		buildtools concurrent core dbus gui network widgets xml \
		qmake:build
USE_XORG=	x11

.include <bsd.port.mk>
