# $FreeBSD: branches/plasma5/KDE/x11/kde5/Makefile 13975 2017-04-27 14:52:14Z tcberner $

PORTNAME=	kde
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde # kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE5 meta port

LICENSE=	LGPL20

RUN_DEPENDS=	kde-baseapps>=0:x11/kde-baseapps \
		kwalletmanager5:security/kwalletmanager

USES=		kde:5 metaport
USE_KDE=	plasma-desktop_run
USE_QT5=	# empty

OPTIONS_DEFINE=	KDEADMIN KDEEDU \
		KDEGAMES KDEGRAPHICS KDEMULTIMEDIA KDENETWORK \
		KDEPIM \
		PULSEAUDIO

OPTIONS_DEFAULT=${OPTIONS_DEFINE:NPULSEAUDIO}

KDEADMIN_DESC=		Administration utilities
KDEADMIN_RUN_DEPENDS=	kdeadmin>=${KDE_APPLICATIONS_VERSION}:sysutils/kdeadmin

KDEEDU_DESC=		Entertaining, educational programs
KDEEDU_RUN_DEPENDS=	kdeedu>=${KDE_APPLICATIONS_VERSION}:misc/kdeedu

KDEGAMES_DESC=		Collection of games
KDEGAMES_RUN_DEPENDS=	kdegames>=${KDE_APPLICATIONS_VERSION}:games/kdegames

KDEGRAPHICS_DESC=	Graphics utilities
KDEGRAPHICS_RUN_DEPENDS=	kdegraphics>=${KDE_APPLICATIONS_VERSION}:graphics/kdegraphics

KDEMULTIMEDIA_DESC=	Multimedia applications
KDEMULTIMEDIA_RUN_DEPENDS=	kdemultimedia>=${KDE_APPLICATIONS_VERSION}:multimedia/kdemultimedia

KDENETWORK_DESC=	Network-related programs
KDENETWORK_RUN_DEPENDS=	kdenetwork>=${KDE_APPLICATIONS_VERSION}:net/kdenetwork

KDEPIM_DESC=		Personal information management
KDEPIM_RUN_DEPENDS=	kdepim>=${KDE_APPLICATIONS_VERSION}:deskutils/kdepim

PULSEAUDIO_USE=		KDE=plasma-pa

.include <bsd.port.mk>
