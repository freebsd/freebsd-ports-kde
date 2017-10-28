# $FreeBSD: branches/plasma5/KDE/net-im/kaccounts-providers/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kaccounts-providers
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	System to administer web accounts for the KDE desktop

LIB_DEPENDS=	libaccounts-glib.so:net-im/libaccounts-glib \
		libkaccounts.so:net-im/kaccounts-integration

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_GNOME=	intltool
USE_QT5=	buildtools_build qmake_build

#install to ${LOCALBASE}:
pre-configure:
	${REINPLACE_CMD} -e 's,/etc,${LOCALBASE}/etc,' \
		${WRKSRC}/webkit-options/CMakeLists.txt

.include <bsd.port.mk>
