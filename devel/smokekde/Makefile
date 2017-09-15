# $FreeBSD: head/devel/smokekde/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	smokekde
DISTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	SMOKE bindings for KDE

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs \
		smokegen smokeqt automoc4 soprano
USE_QT4=	corelib dbus designer_build gui network opengl phonon \
		qt3support sql svg xml \
		qmake_build moc_build uic_build rcc_build
USE_LDCONFIG=	yes

# Disable
# * attica [apparently unstable]
# * okular [okular is no longer kde4 based]
# * nepomuk
# * akonadi
CMAKE_ARGS=	-DWITH_LibAttica:BOOL=FALSE \
		-DWITH_Akonadi:BOOL=FALSE \
		-DWITH_Nepomuk:BOOL=FALSE \
		-DWITH_Okular:BOOL=FALSE \

pre-configure:
	${REINPLACE_CMD} -e '/kde-config.xml/ s|$${SMOKE_GEN_BIN}|smokegen|' \
		${WRKSRC}/kdecore/CMakeLists.txt

.include <bsd.port.mk>
