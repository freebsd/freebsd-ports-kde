PORTNAME=	metasploit-credential
PORTVERSION=	6.0.14
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Credential models for metasploit-framework and Metasploit Pro
WWW=		https://github.com/rapid7/metasploit-credential

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-metasploit-concern>=0:security/rubygem-metasploit-concern \
		rubygem-metasploit_data_models>=5.0.0:security/rubygem-metasploit_data_models \
		rubygem-metasploit-model>=0:security/rubygem-metasploit-model \
		rubygem-net-ssh>=0:security/rubygem-net-ssh \
		rubygem-pg>=0:databases/rubygem-pg \
		rubygem-railties71>=7.1:www/rubygem-railties71 \
		rubygem-rex-socket>=0:security/rubygem-rex-socket \
		rubygem-rubyntlm>=0:net/rubygem-rubyntlm \
		rubygem-rubyzip>=0:archivers/rubygem-rubyzip

NO_ARCH=	yes
USES=		gem

.include <bsd.port.mk>
