PORTNAME=	gitlab-secret_detection
PORTVERSION=	0.23.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Secret detector for Gitlab
WWW=		https://gitlab.com/gitlab-org/security-products/secret-detection/secret-detection-service

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-grpc>=1.63.0<2:net/rubygem-grpc \
		rubygem-grpc_reflection>=0.1<1:net/rubygem-grpc_reflection \
		rubygem-grpc-tools>=1.63<2:net/rubygem-grpc-tools \
		rubygem-parallel>=1<2:sysutils/rubygem-parallel \
		rubygem-re2>=2.7<3:devel/rubygem-re2 \
		rubygem-sentry-ruby>=5.22<6:devel/rubygem-sentry-ruby \
		rubygem-stackprof>=0.2.27<0.3:devel/rubygem-stackprof \
		rubygem-toml-rb>=2.2<3:www/rubygem-toml-rb

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
