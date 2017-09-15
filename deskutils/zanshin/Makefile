# Created by: Adriaan de Groot <groot@kde.org>
# $FreeBSD: branches/plasma5/PORTS/deskutils/zanshin/Makefile 13533 2016-12-30 01:51:06Z fluffy $

PORTNAME=	zanshin
DISTVERSION=	0.4.1
CATEGORIES=	deskutils kde
MASTER_SITES=	https://files.kde.org/zanshin/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Daily organizer for KDE

LIB_DEPENDS=	libical.so:devel/libical

USES=		cmake:outsource compiler:c++14-lang gettext kde:5 tar:bz2
USE_KDE=	ecm akonadinotes akonadicalendar akonadisearch \
		identitymanagement kontactinterface ldap runner wallet
USE_QT5=	qmake_build buildtools_build core qml testlib widgets

.include <bsd.port.mk>

