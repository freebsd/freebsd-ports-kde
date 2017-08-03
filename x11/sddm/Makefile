# $FreeBSD: branches/plasma5/PORTS/x11/sddm/Makefile 13764 2017-03-12 08:06:46Z tcberner $

PORTNAME=	sddm
PORTVERSION=	0.14.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	x11

MAINTAINER=	kde@FreeBSD.org
COMMENT=	QML based login manager

USES=		cmake:outsource desktop-file-utils kde:5
USE_KDE=	ecm
USE_QT5=	concurrent core dbus gui linguisttools multimedia network \
		printsupport qml quick script sql webkit widgets \
		buildtools_build qmake_build
USE_XORG=	xcb

CMAKE_ARGS=	-DUID_MIN=1000 \
		-DUID_MAX=65000 \
		-DCMAKE_INSTALL_SYSCONFDIR:PATH=${LOCALBASE}/etc
# We need to disable PAM at the moment and use the Passwd-based backend
CMAKE_ARGS+=	-DENABLE_PAM:BOOL=FALSE

USE_RC_SUBR=	sddm

USERS=		sddm
GROUPS=		sddm

USE_GITHUB=	yes

post-patch:
# Patch in the correct location for X11 startup files, and make the session start
# script of sddm use the value of ${STARTUP} defined by 90-consolekit
	${REINPLACE_CMD} -e 's#/etc/X11#${LOCALBASE}/etc/X11#g' \
			 -e '/exec.*session/s#exec#exec $${STARTUP}#g' \
		${PATCH_WRKSRC}/data/scripts/Xsession

post-install:
# Install kde4.desktop and xinitrc.desktop.
	${MKDIR} ${STAGEDIR}${PREFIX}/share/xsessions
.for df in kde4 xinitrc
	${INSTALL_DATA} ${FILESDIR}/${df}.desktop ${STAGEDIR}${PREFIX}/share/xsessions
.endfor

.include <bsd.port.mk>
