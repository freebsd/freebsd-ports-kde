# $FreeBSD: branches/plasma5/KDE/net-im/kopete/Makefile 10672 2015-04-25 19:17:13Z tcberner $

PORTNAME=	kopete
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE multi-protocol instant messenger

LIB_DEPENDS=	libidn.so:dns/libidn \
		libqca.so:devel/qca \
		libotr.so:security/libotr \
		libgadu.so:polish/libgadu \
		libortp.so:net/ortp \
		libmediastreamer_base.so:net/mediastreamer \
		libspeex.so:audio/speex \
		libexpat.so:textproc/expat2 \
		libmeanwhile.so:net-im/meanwhile \
		libv4l2.so:multimedia/libv4l \
		libjasper.so:graphics/jasper \
		libjsoncpp.so:devel/jsoncpp
BUILD_DEPENDS=	${LOCALBASE}/include/linux/videodev2.h:multimedia/v4l_compat \
		${LOCALBASE}/lib/mediastreamer/plugins/libmsilbc.so:audio/msilbc
RUN_DEPENDS=	${LOCALBASE}/lib/mediastreamer/plugins/libmsilbc.so:audio/msilbc

USES=		cmake:outsource compiler:c++11-lib jpeg kde:4 pkgconfig \
		shebangfix sqlite ssl tar:xz webplugin:native
USE_GNOME=	libxml2 libxslt
USE_KDE=	kdelibs pimlibs \
		automoc4 qimageblitz
USE_QT4=	corelib gui network qt3support sql xml \
		moc_build qmake_build rcc_build uic_build uic3_build
USE_XORG=	x11 xdamage xext xscrnsaver xtst
USE_LDCONFIG=	yes

SHEBANG_FILES=	protocols/winpopup/winpopup-install \
		protocols/winpopup/winpopup-send \
		kopete/kconf_update/*.pl

WEBPLUGIN_NAME=	# empty
WEBPLUGIN_FILES=	skypebuttons.so

# Explicitly disable ALSA, as it's not used (Jabber Jingle support is
# not built).
CMAKE_ARGS+=	-DWITH_Alsa:BOOL=OFF

# Route Mozilla plugin by standard path.
CMAKE_ARGS+=	-DMOZPLUGIN_INSTALL_DIR:PATH="${WEBPLUGIN_DIR}"

# Forcefully disable net-im/libmsn which was deprecated on 2013-07-27.
CMAKE_ARGS+=	-DHAVE_LIBMSN:BOOL=OFF

# Forcefully disable the video support (needs patches)
CMAKE_ARGS+=	-DDISABLE_VIDEOSUPPORT:BOOL=TRUE

# Forcefully disable libjingle / jingle (needs patches)
CMAKE_ARGS+=	-DWITH_libjingle:BOOL=FALSE

# Fix build with fresh multimedia/v4l_compat installed.
CFLAGS+=	-DHAVE_LINUX_INTEGER_TYPES=1

OPTIONS_DEFINE=	XMMS
XMMS_DESC=	XMMS Kopete nowlistening plugin
XMMS_LIB_DEPENDS=	libxmms.so:multimedia/xmms
XMMS_CMAKE_ON=	-DWITH_Xmms:BOOL=ON
XMMS_CMAKE_OFF=	-DWITH_Xmms:BOOL=OFF

CMAKE_ARGS+=	-DCMAKE_CXX_STANDARD="11"

post-patch:
	${REINPLACE_CMD} '/alloca.h/ d' \
		${WRKSRC}/protocols/jabber/libjingle/talk/base/stringutils.h

.include <bsd.port.mk>
