PORTNAME=	rspec-expectations
PORTVERSION=	3.13.5
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Rspec-expectations adds should and should_not to every object
WWW=		https://rspec.info/ \
		https://github.com/rspec/rspec/tree/main/rspec-expectations \
		https://github.com/rspec/rspec

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-diff-lcs>=1.2.0<2.0:textproc/rubygem-diff-lcs \
		rubygem-rspec-support>=${PORTVERSION:R}.0<3.14:devel/rubygem-rspec-support

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
