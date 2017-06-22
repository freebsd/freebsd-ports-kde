# Created by: Josh Paetzel <jpaetzel@FreeBSD.org>
# $FreeBSD$

PORTNAME=	smb4k
PORTVERSION=	2.0.1
CATEGORIES=	net kde

MAINTAINER=	jpaetzel@FreeBSD.org
COMMENT=	KDE SMB Network browser and SMB shares mounting center

RUN_DEPENDS=	sudo:security/sudo

USES=		cmake:outsource gettext kde:5 samba:run tar:bzip2
USE_LDCONFIG=	yes
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		dbusaddons ecm i18n iconthemes jobwidgets kio notifications \
		parts service solid sonnet textwidgets wallet widgetsaddons \
		windowsystem xmlgui \
		plasma-framework_run
USE_QT5=	core dbus gui network printsupport qml testlib widgets xml \
		buildtools_build qmake_build

SUB_FILES=	pkg-message

USE_GITHUB=	yes
GH_ACCOUNT=	KDE

post-install:
.for i in smb2awk smb2nsmbrc
	${INSTALL_SCRIPT} ${FILESDIR}/${i} ${STAGEDIR}${PREFIX}/bin
.endfor
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${FILESDIR}/README.FreeBSD ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
