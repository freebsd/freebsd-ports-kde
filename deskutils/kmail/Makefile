# $FreeBSD: branches/plasma5/KDE/deskutils/kmail/Makefile 13949 2017-04-25 15:21:11Z tcberner $

PORTNAME=	kmail
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE mail client

LICENSE=	LGPL21

RUN_DEPENDS=	accountwizard:deskutils/kmail-account-wizard \
		importwizard:deskutils/akonadi-import-wizard \
		mboximporter:deskutils/mbox-importer \
		sieveeditor:deskutils/pim-sieve-editor

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons ecm guiaddons i18n iconthemes \
		itemmodels itemviews jobwidgets kcmutils kdelibs4support kio \
		notifications notifyconfig parts service solid sonnet \
		syntaxhighlighting texteditor textwidgets unitconversion wallet \
		widgetsaddons windowsystem xmlgui
# pim components
USE_KDE+=	akonadi akonadicontacts akonadimime akonadisearch calendarcore \
		calendarutils contacts gravatar kdepim-apps-libs \
		identitymanagement libksieve kontactinterface ldap \
		mailcommon mailtransport messagelib tnef
USE_QT5=	core dbus gui location network printsupport qml quick \
		webchannel webengine widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
