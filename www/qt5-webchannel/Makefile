# $FreeBSD$

PORTNAME=	webchannel
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 library for integration of C++/QML with HTML/js clients

USE_QT5=	buildtools_build core examples qml quick
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive,outsource
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

post-patch:
	${REINPLACE_CMD} 's|%%QT_EXAMPLEDIR%%|${QT_EXAMPLEDIR}|g' \
		${PATCH_WRKSRC}/src/webchannel/resources.qrc

.include <bsd.port.mk>
