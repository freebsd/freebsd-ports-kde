# $FreeBSD: head/sysutils/ksysguardd/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	ksysguardd
PORTVERSION=	${KDE4_WORKSPACE_VERSION}
CATEGORIES=	sysutils kde kde-applications
DISTNAME=	kde-workspace-${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE System Guard Daemon

DISTINFO_FILE=	${.CURDIR:H:H}/x11/kde4-workspace/distinfo

USES=		cmake kde:4 tar:xz
CMAKE_ARGS+=	-DBIN_INSTALL_DIR:STRING="${PREFIX}/bin" \
		-DSYSCONF_INSTALL_DIR:STRING="${PREFIX}/etc"

EXTRACT_AFTER_ARGS=	'${DISTNAME}/ksysguard/${PORTNAME}' \
			'${DISTNAME}/ksysguard/example/${PORTNAME}rc' \
			'${DISTNAME}/ksysguard/gui/SignalIDs.h'

WRKSRC=		${WRKDIR}/${DISTNAME}/ksysguard/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME} \
		etc/${PORTNAME}rc

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	15.08.0

pre-build:
	${REINPLACE_CMD} -e 's/<config-workspace.h>/"config-${PORTNAME}.h"/' \
		${WRKSRC}/${PORTNAME}.c

.include <bsd.port.mk>
