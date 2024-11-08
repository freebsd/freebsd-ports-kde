PORTNAME=	kdeconnect-kde
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Support for KDE to interface between your phone and your computer
WWW=		https://community.kde.org/KDEConnect

LICENSE=	GPLv2

LIB_DEPENDS=	libfakekey.so:x11/libfakekey \
		libwayland-client.so:graphics/wayland \
		libKF5PulseAudioQt.so:audio/pulseaudio-qt@qt5
BUILD_DEPENDS=	kpeoplevcard>0:net/kpeoplevcard \
		${LOCALBASE}/include/linux/input.h:devel/evdev-proto \
		wayland-protocols>=0:graphics/wayland-protocols
RUN_DEPENDS=	sshpass:security/sshpass \
		sshfs:filesystems/sshfs \
		kpeoplevcard>0:net/kpeoplevcard 

USES=		cmake compiler:c++11-lang desktop-file-utils gettext kde:6 \
		localbase:ldflags pkgconfig qca qt:6 tar:xz xorg
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons doctools guiaddons i18n iconthemes \
		itemviews jobwidgets kcmutils kio kirigami-addons kirigami2 \
		notifications package people qqc2-desktop-style service solid \
		statusnotifieritem wayland widgetsaddons windowsystem xmlgui \
		ecm:build
USE_QT=		base connectivity multimedia
USE_XORG=	ice sm x11 xext xtst
USE_LDCONFIG=	${QT_QMLDIR}/org/kde/kdeconnect

OPTIONS_DEFINE=	DOCS
CMAKE_OFF=	WITH_PULSEAUDIO # pulseaudio-qt has no Qt6 enabled tarball

KDE_APPLICATIONS_SHLIB_VER=${KDE_APPLICATIONS_VERSION}

.include <bsd.port.mk>
