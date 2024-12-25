PORTNAME=	knotes
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Popup notes
WWW=		https://www.kde.org/

LICENSE=	LGPL21

IGNORE=		No longer part of KDE Gear 24.08

LIB_DEPENDS=	libical.so:devel/libical

USES=		cmake compiler:c++11-lib gettext kde:6 qt:6 tar:xz xorg
USE_KDE=	attica auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons dnssd globalaccel guiaddons i18n \
		iconthemes itemmodels itemviews jobwidgets kcmutils kio \
		newstuff notifications notifyconfig parts service solid sonnet \
		statusnotifieritem textwidgets unitconversion widgetsaddons \
		windowsystem xmlgui \
		ecm:build
# pim components
USE_KDE+=	akonadi akonadicontacts akonadisearch \
		calendarcore calendarutils contacts grantleetheme imap \
		kontactinterface libkdepim mime pimcommon pimtextedit \
		kdepim-runtime:run
USE_QT=		base
USE_XORG=	ice sm x11 xext
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
