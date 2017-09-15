# $FreeBSD: ports/www/kwebkitpart/Makefile,v 1.9 2012/06/06 06:44:30 miwi Exp $

PORTNAME=	kwebkitpart
DISTVERSION=	1.3.2
PORTREVISION=	4
CATEGORIES=	www kde
MASTER_SITES=	LOCAL/makc

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Web browser component for KDE SC based on QtWebKit

USES=		cmake kde:4 cpe tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	designer gui webkit \
		moc_build qmake_build rcc_build uic_build

CPE_VENDOR=	urs_wolfer

.include <bsd.port.mk>
