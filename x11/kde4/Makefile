# Created by: Will Andrews <will@FreeBSD.org>
# $FreeBSD$

PORTNAME=	kde4
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	x11 kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Software Compilation 4 (meta port)

USE_KDE=	baseapps_run runtime_run workspace_run
USES=		kde:4 metaport

OPTIONS_DEFINE=	KDEACCESSIBILITY KDEADMIN KDEARTWORK KDEBINDINGS KDEEDU \
		KDEGAMES KDEGRAPHICS KDEMULTIMEDIA KDENETWORK \
		KDEPLASMA KDEPIM KDESDK KDETOYS KDEUTILS KDEWEBDEV
OPTIONS_DEFAULT=${OPTIONS_DEFINE:NKDEBINDINGS:NKDEPIM}

KDEACCESSIBILITY_DESC=	Accessibility applications
KDEACCESSIBILITY_RUN_DEPENDS=	kdeaccessibility>=${KDE_APPLICATIONS_VERSION}:accessibility/kdeaccessibility

KDEADMIN_DESC=		Administration utilities
KDEADMIN_RUN_DEPENDS=	kdeadmin>=${KDE_APPLICATIONS_VERSION}:sysutils/kdeadmin

KDEARTWORK_DESC=	Additional screensavers and wallpapers
KDEARTWORK_RUN_DEPENDS=	${KDE_PREFIX}/bin/kxsconfig:x11-themes/kdeartwork4

KDEBINDINGS_DESC=	Bindings for programming languages
KDEBINDINGS_RUN_DEPENDS=	kdebindings>=${KDE4_VERSION}:devel/kdebindings4

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
KDEPIM_RUN_DEPENDS=	${KDE_PREFIX}/bin/kmail:deskutils/kdepim4

KDEPLASMA_DESC=		Extra plasmoids and plugins for Plasma
KDEPLASMA_RUN_DEPENDS=	${KDE_PREFIX}/bin/lancelot:deskutils/kdeplasma-addons

KDESDK_DESC=		Software development kit
KDESDK_RUN_DEPENDS=	kdesdk>=${KDE_APPLICATIONS_VERSION}:devel/kdesdk

KDETOYS_DESC=		Miscellaneous small applications
KDETOYS_RUN_DEPENDS=	kdetoys>=${KDE_APPLICATIONS_VERSION}:x11-clocks/kdetoys

KDEUTILS_DESC=		Set of generic utilities
KDEUTILS_RUN_DEPENDS=	kdeutils>=${KDE_APPLICATIONS_VERSION}:misc/kdeutils

KDEWEBDEV_DESC=		Web development environment
KDEWEBDEV_RUN_DEPENDS=	${KDE_PREFIX}/bin/klinkstatus:www/kdewebdev4

.include <bsd.port.mk>
