# $FreeBSD$

PORTNAME=	kmouth
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	accessibility kde kde-applications
PKGNAMESUFFIX=	# hack: uses kde:4 but we don't want the pkgname suffix

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Speech synthesizer frontend for KDE

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
