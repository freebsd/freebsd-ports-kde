# $FreeBSD$

PORTNAME=	digikam
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	2
CATEGORIES=	graphics kde
PKGNAMESUFFIX=	-kde4-l10n

MAINTAINER=	kde@FreeBSD.org
COMMENT=	l10n for digiKam, showFoto, and Kipi-plugins

CONFLICTS_INSTALL=	digikam-2.* kipi-plugins-2.* libkgeomap-2.*

USES=		gettext-tools
WRKSRC=		${WRKDIR}/${DISTNAME}/po

pre-configure:
# avoid conflicts with kde4-l10n ports:
	${RM} ${WRKSRC}/*/libkipi.po

.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
