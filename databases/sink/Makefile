# $FreeBSD: branches/plasma5/KDE/databases/sink/Makefile 13970 2017-04-26 19:42:11Z tcberner $

PORTNAME=	sink
PORTVERSION=	0.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	databases kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Storage server for KDE-Pim

BUILD_DEPENDS=	flatc:devel/flatbuffers
LIB_DEPENDS=	libKAsync.so:devel/kasync \
		libKIMAP2.so:net/kimap2 \
		libcurl.so:ftp/curl \
		libgit2.so:devel/libgit2 \
		liblmdb.so:databases/lmdb
RUN_DEPENDS=	flatc:devel/flatbuffers

USES=		cmake:outsource kde:5 readline shebangfix
USE_KDE=	contacts coreaddons ecm mime
USE_QT5=	concurrent core gui widgets network testlib \
		buildtools_build qmake_build

SHEBANG_FILES=	examples/imapresource/tests/populatemailbox.sh \
		examples/imapresource/tests/resetmailbox.sh

USE_GITHUB=	yes
GH_ACCOUNT=	KDE

.include <bsd.port.mk>
