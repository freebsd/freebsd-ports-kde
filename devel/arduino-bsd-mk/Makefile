PORTNAME=	arduino-bsd-mk
PORTVERSION=	2.6
CATEGORIES=	devel
MASTER_SITES=	https://xse.com/leres/arduino/arduino-bsd-mk/ \
		LOCAL/leres/arduino-bsd-mk

MAINTAINER=	leres@FreeBSD.org
COMMENT=	Build Arduino sketches from the command line on FreeBSD
WWW=		https://xse.com/leres/arduino/arduino-bsd-mk/

LICENSE=	BSD2CLAUSE

USES=		python:run shebangfix

SHEBANG_FILES=	arduino-boards.py

NO_BUILD=	yes
NO_MTREE=	yes

PORTEXAMPLES=	*

PLIST_FILES=	${ALL_FILES} ${ALL_SCRIPTS:R} \
		share/man/man7/bsd.arduino.mk.7.gz

OPTIONS_DEFINE+=	EXAMPLES

MAKE_ARGS=	MANPREFIX=${PREFIX}/share

ALL_FILES=	arduino-bsd-mk/bsd.arduino.mk

ALL_SCRIPTS=	arduino-bsd-mk/scripts/arduino-boards.py \
		arduino-bsd-mk/scripts/arduino-version.sh \
		arduino-bsd-mk/scripts/gcc-version.sh

pre-patch:
	# Honor PREFIX
	${REINPLACE_CMD} -e 's,/usr/local/,${PREFIX}/,' \
	    ${WRKSRC}/arduino-boards.py ${WRKSRC}/bsd.arduino.mk

post-install:
	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . \
	    ${STAGEDIR}$/${EXAMPLESDIR}

.include <bsd.port.mk>
