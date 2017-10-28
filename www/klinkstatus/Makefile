# $FreeBSD$

PORTNAME=	klinkstatus
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	www kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KLinkStatus is a link checker

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs \
		libtidy.so:www/tidy-lib

USES=		cmake:outsource,noninja kde:4 tar:xz
USE_KDE=	automoc4 kdelibs pimlibs runtime soprano
USE_QT4=	corelib dbus gui network phonon svg xml \
		moc_build porting_build qmake_build rcc_build uic_build \
		uic3_build


.include <bsd.port.mk>
