# $FreeBSD$

PORTNAME=	kshutdown
DISTVERSION=	4.0
PORTREVISION=	3
CATEGORIES=	sysutils kde
MASTER_SITES=	SF/${PORTNAME}/KShutdown/${DISTVERSION}/
DISTNAME=	${PORTNAME}-source-${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Advanced shutdown utility for KDE

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		alias cmake:outsource compiler:c++0x gettext kde:5 zip
USE_KDE=	auth codecs config configwidgets coreaddons dbusaddons ecm \
		globalaccel i18n idletime notifications notifyconfig \
		widgetsaddons xmlgui
USE_QT5=	core dbus gui widgets xml \
		buildtools_build qmake_build

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}

# Make sure, we're building the KF5 version.
CMAKE_ARGS=	-DKS_KF5:BOOL=TRUE \
		-DKS_PURE_QT:BOOL=FALSE

.include <bsd.port.mk>
