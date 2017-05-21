# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	kdewebdev
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	www kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Comprehensive html/website development environment

LIB_DEPENDS=	libtidy.so:www/tidy-lib \
		libboost_thread.so:devel/boost-libs

USES=		cmake:outsource kde:4 tar:xz
USE_GNOME=	libxml2 libxslt
USE_KDE=	kdelibs pimlibs automoc4
USE_QT4=	dbus porting_build \
		qmake_build moc_build rcc_build uic_build uic3_build
USE_LDCONFIG=	yes

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_BRANCH=	stable
KDE_APPLICATIONS_VERSION=       16.08.3

.include <bsd.port.mk>
