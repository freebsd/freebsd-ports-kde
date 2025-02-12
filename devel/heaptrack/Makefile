PORTNAME=	heaptrack
DISTVERSION=	1.5.0
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/${PORTNAME}/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Heap memory profiler
WWW=		https://github.com/KDE/heaptrack

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSES/GPL-2.0-or-later.txt

LIB_DEPENDS=	libboost_regex.so:devel/boost-libs \
		libdw.so:devel/elfutils \
		libunwind.so:devel/libunwind \
		libKChart6.so:graphics/kdiagram-qt6 \
		libzstd.so:archivers/zstd

USES=		cmake compiler:c++17-lang desktop-file-utils gettext \
		kde:6 localbase qt:6 tar:xz xorg
USE_KDE=	auth codecs completion config configwidgets coreaddons i18n \
		iconthemes itemmodels jobwidgets kio service solid \
		threadweaver widgetsaddons windowsystem \
		ecm:build
USE_QT=		base
USE_XORG=	x11

CMAKE_ON+=	HEAPTRACK_USE_QT6

.include <bsd.port.mk>
