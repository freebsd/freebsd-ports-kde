# $FreeBSD$

PORTNAME=	kdav2
DISTVERSION=	0.2.0
MASTER_SITES=	KDE/unstable/${PORTNAME}/${DISTVERSION}/src
CATEGORIES=	net kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	A DAV protocol implementation with KJobs

USES=		cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	coreaddons ecm
USE_QT=		core gui network testlib xml xmlpatterns \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
