PORTNAME=	qrcodegen
PORTVERSION=	1.14.2
PORTREVISION=	1
CATEGORIES=	textproc java
MASTER_SITES=	http://bsd-geek.de/FreeBSD/distfiles/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GUI to generate QR codes
WWW=		https://sites.google.com/site/qrcodeforwn/home/qr-code-generator-for-wireless-networks

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		java zip:infozip

NO_ARCH=	yes
NO_BUILD=	yes
SUB_FILES=	qrcodegen

INSTALLFILES=	FAQ.txt Installation.txt NOTICE QRCodeGen.jar Version.html

DESKTOP_ENTRIES="Portable QR-Code Generator" \
		"${COMMENT}" \
		"" \
		"qrcodegen" \
		"Utility;2DGraphics;Java;" \
		false

do-extract:
	@${RM} -r ${WRKDIR}
	@${MKDIR} ${WRKSRC}
	@${UNZIP_CMD} -q -j -d ${WRKSRC} ${DISTDIR}/${EXTRACT_ONLY}

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
.for i in ${INSTALLFILES}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DATADIR}/
.endfor
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
