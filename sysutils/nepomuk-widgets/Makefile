# $FreeBSD: head/sysutils/nepomuk-widgets/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	nepomuk-widgets
DISTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The NepomukWidget libraries

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4 soprano nepomuk-core
USE_QT4=	corelib dbus gui moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
