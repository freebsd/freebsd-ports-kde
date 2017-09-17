# $FreeBSD: branches/plasma5/KDE/deskutils/kfind-kf5/Makefile 13695 2017-03-08 17:31:22Z tcberner $

PORTNAME=	kfind
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Find files and folders

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	archive crash ecm guiaddons itemviews kdelibs4support \
		notifications solid unitconversion
USE_QT5=	core printsupport \
		buildtools_build qmake_build

.include <bsd.port.mk>
