# $FreeBSD: branches/plasma5/KDE/sysutils/xsettings-kde/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	xsettings-kde
DISTVERSION=	0.12.3
CATEGORIES=	sysutils kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Apply KDE configuration to GTK+ applications instantly

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	autoconf-archive>=0:devel/autoconf-archive

USES=		autoreconf gettext gmake libtool pkgconfig tar:xz
USE_GNOME=	glib20
USE_XORG=	x11

GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	5bf1e8d

.include <bsd.port.mk>
