PORTNAME=	shotcut
DISTVERSION=	${FULLVERSION}
CATEGORIES=	multimedia
MASTER_SITES=	https://github.com/${GH_ACCOUNT}/${PORTNAME}/releases/download/v${DISTVERSION}/
DISTNAME=	${PORTNAME}-src-${DISTVERSION:C/\.//g}

MAINTAINER=	vishwin@FreeBSD.org
COMMENT=	Free, open source, cross-platform video editor

LICENSE=	GPLv3

LIB_DEPENDS=	libmlt-7.so:multimedia/mlt
RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg \
		${LOCALBASE}/lib/libjack.so:audio/jack

USES=		compiler:c++11-lang desktop-file-utils gl pkgconfig \
		qmake:outsource qt:5 sdl shared-mime-info tar:txz xorg

GH_ACCOUNT=	mltframework

USE_GL=	gl
USE_QT=		buildtools_build concurrent_build core declarative \
		graphicaleffects_run gui linguisttools_build multimedia \
		network opengl printsupport quickcontrols quickcontrols2 \
		sql websockets widgets xml
USE_SDL=	sdl2
USE_XORG=	x11
QMAKE_ARGS=	${PORTNAME:tu}_VERSION="${FULLVERSION}"

WRKSRC=	${WRKDIR}/src
WRKSRC_SUBDIR=	${PORTNAME}

OPTIONS_DEFINE=	FREI0R LADSPA NLS
OPTIONS_DEFAULT=FREI0R LADSPA
OPTIONS_SUB=	yes

FREI0R_RUN_DEPENDS=	frei0r-plugins>=0:graphics/frei0r-plugins

LADSPA_RUN_DEPENDS=	swhplugins>=0:audio/swhplugins

# Needed to be able to correctly check for updates in-app.
FULLVERSION=	21.06.29

.include <bsd.port.mk>
