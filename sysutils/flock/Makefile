# Created by: Andrey Zonov <andrey@zonov.org>

PORTNAME=	flock
PORTVERPREFIX=	2.30
PORTVERSION=	${PORTVERPREFIX}.1
CATEGORIES=	sysutils
MASTER_SITES=	KERNEL_ORG/linux/utils/util-linux/v${PORTVERPREFIX}/
DISTNAME=	util-linux-${PORTVERSION}

MAINTAINER=	franco@opnsense.org
COMMENT=	Manage locks from shell scripts

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		libtool pkgconfig

OPTIONS_DEFINE=	NLS

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	autoreconf gettext

PLIST_FILES=	bin/flock man/man1/flock.1.gz \
		etc/bash_completion.d/flock

do-build:
	# skip building unneeded utils
	${MAKE} -C ${WRKSRC} flock

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/flock ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/sys-utils/flock.1 \
		${STAGEDIR}${MANPREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/bash_completion.d
	${INSTALL_DATA} ${WRKSRC}/bash-completion/flock ${STAGEDIR}${PREFIX}/etc/bash_completion.d

.include <bsd.port.mk>
