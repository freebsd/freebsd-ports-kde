PORTNAME=	XML-Feed
PORTVERSION=	0.65
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 modules for Syndication feed parser and auto-discovery
WWW=		https://metacpan.org/release/XML-Feed

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-ErrorHandler>=0:devel/p5-Class-ErrorHandler \
		p5-DateTime>=0:devel/p5-DateTime \
		p5-DateTime-Format-Flexible>=0:devel/p5-DateTime-Format-Flexible \
		p5-DateTime-Format-ISO8601>=0:devel/p5-DateTime-Format-ISO8601 \
		p5-DateTime-Format-Mail>=0:devel/p5-DateTime-Format-Mail \
		p5-DateTime-Format-Natural>=0:devel/p5-DateTime-Format-Natural \
		p5-DateTime-Format-W3CDTF>=0:devel/p5-DateTime-Format-W3CDTF \
		p5-Feed-Find>=0:www/p5-Feed-Find \
		p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-Module-Pluggable>=0:devel/p5-Module-Pluggable \
		p5-URI-Fetch>=0:www/p5-URI-Fetch \
		p5-XML-Atom>=0.38:textproc/p5-XML-Atom \
		p5-XML-LibXML>=1.66:textproc/p5-XML-LibXML \
		p5-XML-RSS>=1.47:textproc/p5-XML-RSS \
		p5-libwww>=0:www/p5-libwww
TEST_DEPENDS=	p5-URI>=0:net/p5-URI \
		p5-XML-RSS-LibXML>=0.30.04:textproc/p5-XML-RSS-LibXML \
		p5-XML-XPath>=0:textproc/p5-XML-XPath

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
