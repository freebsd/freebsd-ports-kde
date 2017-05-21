# Created by: tcberner
# $FreeBSD$

PORTNAME=	libkcompactdisc
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	audio kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for interfacing with audio CDs

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	coreaddons ecm emoticons i18n itemmodels itemviews kdelibs4support
USE_QT5=	buildtools_build core dbus qmake_build
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	ALSA

ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib

post-patch-ALSA-off:
	${REINPLACE_CMD} -e '/find_package(Alsa)/d' \
		-e '/alsa_configure_file/d' ${WRKSRC}/CMakeLists.txt

post-configure-ALSA-off:
	${TOUCH} ${CONFIGURE_WRKSRC}/config-alsa.h

.include <bsd.port.mk>
