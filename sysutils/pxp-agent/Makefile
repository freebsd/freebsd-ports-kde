PORTNAME=	pxp-agent
PORTVERSION=	1.15.23
PORTREVISION=	2
CATEGORIES=	sysutils

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	PCP eXecution Protocol Agent
WWW=		https://github.com/puppetlabs/pxp-agent

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Project got archived, dependencies are broken
EXPIRATION_DATE=2025-05-08

LIB_DEPENDS=	liblibcpp-pcp-client.so:net/cpp-pcp-client \
		libboost_thread.so:devel/boost-libs \
		liblibcpp-hocon.so:devel/cpp-hocon \
		libleatherman_util.so:devel/leatherman

USES=		cmake compiler:c++11-lang shebangfix ssl
USE_GITHUB=	yes

GH_ACCOUNT=	puppetlabs

CMAKE_OFF=	ENABLE_CXX_WERROR
LDFLAGS+=	-lthr
SHEBANG_FILES=	exe/apply_ruby_shim.rb
ruby_OLD_CMD=	/opt/puppetlabs/puppet/bin/ruby

.include <bsd.port.mk>
