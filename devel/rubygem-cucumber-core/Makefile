# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	cucumber-core
PORTVERSION=	9.0.1
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Core library for the Cucumber BDD app

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-cucumber-gherkin18>=18.1.0<19:textproc/rubygem-cucumber-gherkin18 \
		rubygem-cucumber-messages15>=15.0.0<16:devel/rubygem-cucumber-messages15 \
		rubygem-cucumber-tag-expressions>=3.0.1<4:devel/rubygem-cucumber-tag-expressions

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
