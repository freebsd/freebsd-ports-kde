# $FreeBSD$

PORTNAME=	kget
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE download manager

LIB_DEPENDS=	libgpgme.so:security/gpgme \
		libktorrent.so:net-p2p/libktorrent-kde4 \
		libmms.so:net/libmms \
		libqca.so:devel/qca \
		libboost_thread.so:devel/boost-libs

# do not depend on workspace/nepomuk this way there is no conflict
# with plasma5*
CMAKE_ARGS=	-DWITH_KDE4_Workspace:BOOL=FALSE \
		-DWITH_NepomukCore:BOOL=FALSE \
		-DWITH_NepomukWidgets:BOOL=FALSE

USES=		cmake:outsource kde:4 shebangfix sqlite tar:xz
USE_KDE=	automoc4 kdelibs libkonq ontologies soprano
USE_QT4=	corelib dbus gui network phonon sql svg xml \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes
SHEBANG_FILES=	conf/*.pl

MAKE_ENV=	XDG_CONFIG_HOME=/dev/null
CONFIGURE_ENV=	XDG_CONFIG_HOME=/dev/null

.include <bsd.port.mk>
