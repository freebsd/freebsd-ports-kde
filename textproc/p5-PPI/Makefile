PORTNAME=	PPI
PORTVERSION=	1.283
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MITHALDU
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Analyze and manipulate Perl code without using perl itself
WWW=		https://metacpan.org/release/PPI

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_GPLv1+ =	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Clone>=0.30:devel/p5-Clone \
		p5-Params-Util>=1.00:devel/p5-Params-Util \
		p5-Safe-Isa>=0:devel/p5-Safe-Isa \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken \
		p5-YAML-PP>=0:textproc/p5-YAML-PP
TEST_DEPENDS=	p5-Class-Inspector>=1.22:devel/p5-Class-Inspector \
		p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings \
		p5-Test-Object>=0.07:devel/p5-Test-Object \
		p5-Test-SubCalls>=1.07:devel/p5-Test-SubCalls

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

PORTSCOUT=	limit:^[0-9\.]*$$

.include <bsd.port.mk>
