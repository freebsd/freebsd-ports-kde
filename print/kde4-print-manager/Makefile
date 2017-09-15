# $FreeBSD: head/print/kde4-print-manager/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	print-manager
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	print kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Printer manager for KDE 4

LIB_DEPENDS=	libcups.so:print/cups
RUN_DEPENDS=	${LOCALBASE}/share/cups/data/testprint:print/cups-filters

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus declarative designer gui network svg xml \
		qmake_build moc_build uic_build rcc_build

# Override KDE4 versions to fetch the last one
KDE_APPLICATIONS_VERSION=	14.12.3

post-patch:
	@${REINPLACE_CMD} 's,/usr/share/cups,${LOCALBASE}/share/cups,' \
		${WRKSRC}/libkcups/KCupsRequest.cpp

.include <bsd.port.mk>
