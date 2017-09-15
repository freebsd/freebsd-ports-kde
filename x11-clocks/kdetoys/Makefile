# $FreeBSD: head/x11-clocks/kdetoys4/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	kdetoys
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-clocks kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE miscellaneous applications (meta port)

USES=		kde:4 metaport

OPTIONS_DEFINE=	AMOR KTEATIME
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

AMOR_DESC=		Small animation which sits on top of active window
AMOR_RUN_DEPENDS=	${KDE_PREFIX}/bin/amor:x11-clocks/amor

KTEATIME_DESC=		Handy timer for steeping tea
KTEATIME_RUN_DEPENDS=	${KDE_PREFIX}/bin/kteatime:x11-clocks/kteatime

.include <bsd.port.mk>
