PORTNAME=	rdtool
PORTVERSION=	0.6.38
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc ruby
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	RD to HTML/man/etc. converter (RD is to Ruby as POD is to Perl)
WWW=		https://github.com/uwabami/rdtool

BROKEN=		hook /wrkdirs/usr/ports/textproc/ruby-rdtool/work/rdtool-0.6.38/lib/rd/pre-setup.rb failed: undefined method 'exists?' for module FileTest

BUILD_DEPENDS=	racc:devel/rubygem-racc

USES=	ruby:setup
USE_GITHUB=	yes
GH_ACCOUNT=	uwabami

RUBY_MODNAME=	rd

DOCS_EN=	README.rd	doc/rd-draft.rd
DOCS_JA=	README.rd.ja	doc/rd-draft.rd.ja

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	${MKDIR} ${STAGEDIR}${RUBY_SITELIBDIR}/rd
	${INSTALL_DATA} ${WRKSRC}/lib/rd/dot.rd2rc ${STAGEDIR}${RUBY_SITELIBDIR}/rd/
	${MKDIR} ${STAGEDIR}${RUBY_MODEXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/lib/rd/dot.rd2rc ${STAGEDIR}${RUBY_MODEXAMPLESDIR}/
	${MKDIR} ${STAGEDIR}${RUBY_MODDOCDIR}/ja
.for f in ${DOCS_EN}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${RUBY_MODDOCDIR}/
.endfor
.for f in ${DOCS_JA}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${RUBY_MODDOCDIR}/ja/
.endfor

.include <bsd.port.mk>
