# Created by: tcberner
# $FreeBSD: branches/plasma5/KDE/security/plasma5-kwallet-pam/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kwallet-pam
PORTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	security kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 KWallet PAM Integration

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error

USES=		cmake:outsource cpe gettext kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build qmake_build

.include <bsd.port.mk>
