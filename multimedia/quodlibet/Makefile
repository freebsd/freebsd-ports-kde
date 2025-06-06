PORTNAME=	quodlibet
DISTVERSION=	4.6.0
CATEGORIES=	multimedia audio python
MASTER_SITES=	https://github.com/${PORTNAME}/${PORTNAME}/releases/download/release-${DISTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	aly@aaronly.me
COMMENT=	Music library/editor/player written in Python
WWW=		https://quodlibet.readthedocs.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cairo>0:graphics/py-cairo@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dbus>0:devel/py-dbus@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}feedparser>0:textproc/py-feedparser@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mutagen>=1.34:audio/py-mutagen@${PY_FLAVOR} \
		${LOCALBASE}/libexec/notification-daemon:deskutils/notification-daemon
LIB_DEPENDS=	libsoup-2.4.so:devel/libsoup

USES=		desktop-file-utils gettext gnome gstreamer python shebangfix
SHEBANG_FILES=	exfalso.py operon.py quodlibet.py
USE_PYTHON=	distutils autoplist
USE_GNOME=	gtk30 pygobject3
USE_GSTREAMER=	good

NO_ARCH=	yes
CONFLICTS_INSTALL=	${PORTNAME}

OPTIONS_DEFINE=		PULSEAUDIO

PULSEAUDIO_DESC=	Support PulseAudio
PULSEAUDIO_USE=		GSTREAMER=pulse

.include <bsd.port.mk>
