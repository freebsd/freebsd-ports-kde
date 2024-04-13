PORTNAME=	kde6
DISTVERSION=	${KDE_PLASMA_VERSION}.${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11 kde kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Plasma Desktop and Applications (current)
WWW=		https://www.kde.org

RUN_DEPENDS=	plasma6-plasma>0:x11/plasma6-plasma \
		kf6-frameworks>0:x11/kf6-frameworks \
		kate>0:editors/kate \
		dolphin>0:x11-fm/dolphin \
		konsole>0:x11/konsole \
		gwenview>0:graphics/gwenview

USES=		kde:6 metaport qt:6
USE_QT=		# empty

.include <bsd.port.mk>
