PORTNAME=	mp3check
PORTVERSION=	1.6
CATEGORIES=	audio
MASTER_SITES=	http://www.icculus.org/mp3check/
EXTRACT_SUFX=	# empty

DEPRECATED=	Depends on expired audio/id3tool
EXPIRATION_DATE=2025-06-04

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for checking and fixing MP3 archive inconsistencies
WWW=		https://www.icculus.org/mp3check/

RUN_DEPENDS=	${LOCALBASE}/bin/id3tool:audio/id3tool \
		${LOCALBASE}/bin/mp3_check:audio/mp3_check

USES=		shebangfix perl5
USE_PERL5=	run
NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	${WRKSRC}
NO_BUILD=	yes
PLIST_FILES=	bin/mp3check
SHEBANG_FILES=	${DISTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${STAGEDIR}${PREFIX}/bin/mp3check

.include <bsd.port.mk>
