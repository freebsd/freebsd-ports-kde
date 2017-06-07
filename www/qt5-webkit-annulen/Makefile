# Created by: tcberner
# $FreeBSD: branches/plasma5/PORTS/www/qt5-webkit-annulen/Makefile 13983 2017-05-02 18:01:20Z tcberner $

PORTNAME=		webkit-annulen
PORTVERSION=		5.212.0.20170607
DISTVERSIONSUFFIX=	-${GH_TAGNAME}
CATEGORIES=		www
MASTER_SITES=		LOCAL/tcberner/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=		qt5-

MAINTAINER=		kde@FreeBSD.org
COMMENT=		QtWebKit with a more modern WebKit code base

LICENSE=		GPLv2

LIB_DEPENDS=		libfontconfig.so:x11-fonts/fontconfig \
			libgstapp-1.0.so:multimedia/gstreamer1-plugins \
			libgstbase-1.0.so:multimedia/gstreamer1 \
			libhyphen.so:textproc/hyphen \
			libicui18n.so:devel/icu \
			libpng16.so:graphics/png \
			libwebp.so:graphics/webp

USES=			bison cmake:outsource gperf jpeg pathfix perl5 pkgconfig \
			python:build sqlite:3 tar:xz
USE_GNOME=		glib20 libxml2 libxslt
USE_GSTREAMER1=		core
USE_QT5=		core gui location network opengl printsupport \
			qml quick sensors testlib webchannel widgets \
			buildtools_build qmake_build
USE_RUBY=		yes
USE_XORG=		x11 xcomposite xrender

RUBY_NO_RUN_DEPENDS=	yes

CMAKE_ARGS=		-DPORT:STRING="Qt" \
			-DKDE_INSTALL_INCLUDEDIR:PATH="${QT_INCDIR_REL}" \
			-DKDE_INSTALL_LIBDIR:PATH="${QT_LIBDIR_REL}" \
			-DENABLE_OPENGL:BOOL=TRUE \
			-DUSE_QT_MULTIMEDIA:BOOL=FALSE

# Add -DNDEBUG to CXXFLAGS which in turn gets sucked into
# CMAKE_CXX_FLAGS_RELEASE where we actually want to have it.
# [for the ASSERT in Source/WebCore/platform/graphics/texmap/GraphicsLayerTextureMapper.cpp ]
CXXFLAGS+=		-DNDEBUG

CONFLICTS_INSTALL=	qt5-webkit-5.* qt5-webkit-annulen-wk2-5.*
PLIST_SUB=		FULLVER="${PORTVERSION:R}"

# The git tag to fetch
GH_TAGNAME=		5681c65

.include <bsd.port.mk>

# The git repository contains subdirectories with tests and websites that take
# up a lot of space. Therefore manually create a tarball using the target
# create-src-archive below.
.PHONY: create-src-archive
ARCHIVE_DIR=	${DISTDIR}/${DISTNAME}
ORIGINAL_DIR=	${DISTDIR}/webkit-${GH_TAGNAME}
DONOTEXTRACT=	JSTests LayoutTests ManualTests PerformanceTests Websites
create-src-archive:
	fetch https://codeload.github.com/annulen/webkit/tar.gz/${GH_TAGNAME}?dummy=/ -o ${ORIGINAL_DIR}.tar.gz
	tar -xf ${ORIGINAL_DIR}.tar.gz ${DONOTEXTRACT:S,^,--exclude ,} --directory ${DISTDIR}
	${MV} ${ORIGINAL_DIR} ${ARCHIVE_DIR}
	${TAR} -cf - -C ${ARCHIVE_DIR:H} ${ARCHIVE_DIR:T} | ${XZ_CMD} > ${ARCHIVE_DIR}.tar.xz
	${MAKE} makesum
