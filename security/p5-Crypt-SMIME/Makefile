PORTNAME=	Crypt-SMIME
PORTVERSION=	0.31
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	S/MIME message signing, verification, encryption and decryption
WWW=		https://metacpan.org/release/Crypt-SMIME

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-ExtUtils-CChecker>=0:devel/p5-ExtUtils-CChecker \
		p5-ExtUtils-PkgConfig>=0:devel/p5-ExtUtils-PkgConfig
TEST_DEPENDS=	p5-Taint-Util>=0.08:devel/p5-Taint-Util \
		p5-Test-Dependencies>=0:devel/p5-Test-Dependencies \
		p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-Pod>=1.14:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.04:devel/p5-Test-Pod-Coverage \
		p5-Test-Taint>=0:devel/p5-Test-Taint

USES=		perl5 ssl
USE_PERL5=	configure

CONFIGURE_ENV=	LIBCRYPTO_CFLAGS="-I${OPENSSLINC}" LIBCRYPTO_LIBS="-L${OPENSSLLIB} -lcrypto"
MAKE_ENV=	OPENSSLBASE=${OPENSSLBASE}

post-patch:
	@${RM} ${WRKSRC}/t/*.orig

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/SMIME/SMIME.so

.include <bsd.port.mk>
