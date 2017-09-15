# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: branches/plasma5/KDE/security/kgpg-kde4/Makefile 13743 2017-03-10 23:32:54Z tcberner $

PORTNAME=	kgpg
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PKGNAMESUFFIX=	-kde4
CATEGORIES=	security kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Encryption tool for KDE

RUN_DEPENDS=	gpg2:security/gnupg

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs pimlibs
USE_QT4=	qmake_build moc_build rcc_build uic_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_BRANCH=	stable
KDE_APPLICATIONS_VERSION=       16.08.3

.include <bsd.port.mk>
