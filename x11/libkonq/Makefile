# $FreeBSD$

PORTNAME=	libkonq
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11 kde kde-applications
DISTNAME=	kde-baseapps-${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Core library for Konqueror

USES=		cmake:outsource kde:4 tar:xz
USE_QT4=	corelib dbus gui \
		moc_build qmake_build rcc_build uic_build
USE_KDE=	kdelibs automoc4
USE_LDCONFIG=	yes
USE_XORG=	x11

BUILD_WRKSRC=	${CONFIGURE_WRKSRC}/lib/konq
INSTALL_WRKSRC=	${BUILD_WRKSRC}

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=       15.04.3

.include <bsd.port.mk>
