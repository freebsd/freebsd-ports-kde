PORTNAME=	DR-Tarantool
PORTVERSION=	0.44
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:UNERA
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl driver for Tarantool
WWW=		https://metacpan.org/release/DR-Tarantool \
		https://github.com/dr-co/dr-tarantool

LICENSE=	ART10

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-AnyEvent>=0,1:devel/p5-AnyEvent \
		p5-Devel-GlobalDestruction>=0:devel/p5-Devel-GlobalDestruction \
		p5-JSON-XS>=0:converters/p5-JSON-XS \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/DR/Tarantool/Tarantool.so

.include <bsd.port.mk>
