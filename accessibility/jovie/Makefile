# $FreeBSD$

PORTNAME=	jovie
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	accessibility kde kde-applications
PKGNAMESUFFIX=	# hack: uses kde:4 but we don't want the pkgname suffix

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE text-to-speech system

LIB_DEPENDS=	libspeechd.so:accessibility/speech-dispatcher

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	xml qmake_build moc_build uic_build rcc_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
