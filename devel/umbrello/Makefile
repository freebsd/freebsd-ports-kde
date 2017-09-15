# $FreeBSD$

PORTNAME=	umbrello
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	UML modeller for KDE

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs

USES=		cmake:outsource kde:5 tar:xz
USE_GNOME=	libxml2 libxslt
USE_KDE=	archive auth codecs completion config configwidgets \
		coreaddons ecm i18n iconthemes jobwidgets kdelibs4support\
		kio parts service sonnet texteditor textwidgets \
		widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network printsupport svg webkit widgets xml \
		buildtools_build qmake_build

# Build the KDE Frameworks 5 based version.
CMAKE_ARGS+=	-DBUILD_KF5:BOOL=TRUE

post-patch:
# The CMakeFile  sets BUILD_UNITTESTS to 1, not respecting the
# value passed via CMAKE_ARGS.
	${REINPLACE_CMD} -e '/BUILD_UNITTESTS/s|1|0|' \
		${PATCH_WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
