# $FreeBSD: head/sysutils/baloo/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	baloo
DISTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE framework for searching and managing user metadata

CONFLICTS_INSTALL=	kde-runtime-4.12.*

LIB_DEPENDS=	libxapian.so:databases/xapian-core \
		libqjson.so:devel/qjson

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	akonadi automoc4 kdelibs kfilemetadata \
		pimlibs
USE_QT4=	corelib qmake_build moc_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
