PORTNAME=	ns3
PORTVERSION=	3.35
PORTREVISION=	2
CATEGORIES=	net education
MASTER_SITES=	https://www.nsnam.org/release/
DISTNAME=	ns-allinone-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Network simulator for Internet systems
WWW=		https://www.nsnam.org/

LICENSE=	GPLv2

BROKEN=		Fails to compile
DEPRECATED=	Outdated and unmaintained for years
EXPIRATION_DATE=2024-08-06

USES=		compiler:c++11-lib gettext gnome pkgconfig python sqlite \
		tar:bzip2 waf
USE_GNOME=	libxml2
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--int64x64=cairo
WRKSRC_SUBDIR=	ns-${DISTVERSION}
PLIST_SUB=	VERSION="${PORTVERSION}"

OPTIONS_DEFINE=	DEBUG EXAMPLES GSL GTK2 SUDO TEST
OPTIONS_DEFAULT=TEST
OPTIONS_SUB=	yes

GSL_DESC=		GNU Scientific Library support
SUDO_DESC=		Use sudo to set suid bits on executables

DEBUG_CONFIGURE_ON=	--build-profile=debug
DEBUG_CONFIGURE_OFF=	--build-profile=release
DEBUG_PLIST_SUB=	DEBUG_SUFX="-debug"
DEBUG_PLIST_SUB_OFF=	DEBUG_SUFX=""

EXAMPLES_CONFIGURE_ENABLE=	examples

GSL_LIB_DEPENDS=	libgsl.so:math/gsl

GTK2_LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
			libfreetype.so:print/freetype2
GTK2_USE=		GNOME=atk,cairo,gdkpixbuf2,glib20,gtk20,pango
GTK2_CONFIGURE_OFF=	--disable-gtk

SUDO_BUILD_DEPENDS=	sudo:security/sudo
SUDO_CONFIGURE_ON=	--enable-sudo

TEST_CONFIGURE_ENABLE=	tests

post-install:
	@${FIND} ${STAGEDIR} \( -path '*/bin/*' -or -name '*.so' \) \
		-type f -exec ${STRIP_CMD} {} +
	@${FIND} ${STAGEDIR} \( -path '*/pkgconfig/*' -or \
			-name 'config-store-config.h' \) \
		-type f -exec ${REINPLACE_CMD} -i '' 's,${STAGEDIR},,' {} +

.include <bsd.port.mk>
