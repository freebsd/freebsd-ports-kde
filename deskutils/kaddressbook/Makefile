# $FreeBSD: branches/plasma5/KDE/deskutils/kaddressbook/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	kaddressbook
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE contact manager

LIB_DEPENDS=	libassuan.so:security/libassuan \
		libgpg-error.so:security/libgpg-error \
		libgpgme.so:security/gpgme \
		libgpgmepp.so:security/gpgme-cpp

USES=		cmake:outsource compiler:c++11-lib gettext grantlee:5 kde:5 \
		tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		ecm i18n iconthemes itemmodels jobwidgets kcmutils kio parts \
		prison service sonnet textwidgets widgetsaddons xmlgui
# pim components
USE_KDE+=	akonadi akonadicontacts akonadisearch contacts grantleetheme \
		kdepim-apps-libs kontactinterface libkdepim pimcommon
USE_QT5=	core dbus gui network printsupport widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
