PORTNAME=	alloy
PORTVERSION=	1.0.0
DISTVERSIONPREFIX=v
CATEGORIES=	sysutils

MAINTAINER=	zach.leslie@grafana.com
COMMENT=	OpenTelemetry Collector distribution with programmable pipelines
WWW=		https://github.com/grafana/alloy

LICENSE=	MIT

BUILD_DEPENDS=	git:devel/git

USES=		go:1.22,modules
USE_GITHUB=	yes

GH_ACCOUNT=	grafana
GH_PROJECT=	alloy
USE_RC_SUBR=	alloy

GO_MODULE=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
GO_TARGET=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
GO_BUILDFLAGS=	-ldflags='-X github.com/grafana/alloy/internal/build.Version=v${PORTVERSION}'

 # Copy the go.mod so we can get all the dist files during fetch.
_USES_fetch+= 600:go-syntax-fetch
go-syntax-fetch:
	@${ECHO_MSG} "===> Fetching ${GO_MODNAME}/syntax dependency";
	(cd ${DISTDIR}/${DIST_SUBDIR}; [ -e syntax/go.mod ] || mkdir syntax/; \
		tar -xzf grafana-alloy-v${PORTVERSION}_GH0.tar.gz ${PORTNAME}-${PORTVERSION}/syntax/go.mod; \
		cp ${PORTNAME}-${PORTVERSION}/syntax/go.mod syntax/go.mod)

# Copy over the syntax/ directory from the source extract to ensure the go mod
# replace for ./syntax is handled with the correct files on disk.
_USES_extract+= 600:go-post-extract-syntax
go-post-extract-syntax:
	@cp -r ${WRKDIR}/${PORTNAME}-${PORTVERSION}/syntax ${GO_WRKSRC}/syntax;

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/alloy ${STAGEDIR}${PREFIX}/bin/alloy
	${INSTALL_DATA} ${WRKSRC}/example-config.alloy ${STAGEDIR}${PREFIX}/etc/alloy.flow.sample

post-install:
	${MKDIR} ${STAGEDIR}/var/alloy
	chgrp nobody ${STAGEDIR}/var/alloy

.include <bsd.port.mk>
