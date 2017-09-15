# $FreeBSD: head/devel/ruby-korundum/Makefile 420774 2016-08-24 08:20:31Z tcberner $

PORTNAME=	korundum
DISTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-kde4 ruby
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Ruby bindings for KDE

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs pimlibs \
		qtruby smokegen smokekde smokeqt \
		akonadi automoc4 soprano
USE_QT4=	corelib dbus gui network opengl sql svg xml \
		qmake_build moc_build uic_build rcc_build
USE_RUBY=	yes

CMAKE_ARGS+=	-DRUBY_LIBRARY=${LOCALBASE}/lib/lib${RUBY_NAME}.so \
		-DRUBY_INCLUDE_PATH=${LOCALBASE}/lib/ruby/${RUBY_VER}/${RUBY_ARCH} \
		-DCUSTOM_RUBY_SITE_LIB_DIR=${RUBY_SITELIBDIR} \
		-DCUSTOM_RUBY_SITE_ARCH_DIR=${RUBY_SITEARCHLIBDIR} \
		-DWITH_Kate:BOOL=FALSE \
		-DWITH_Okular:BOOL=FALSE \

pre-configure:
	${REINPLACE_CMD} -e '/examples/ d' \
		${WRKSRC}/CMakeLists.txt \
		${WRKSRC}/modules/plasma/CMakeLists.txt

.include <bsd.port.mk>
