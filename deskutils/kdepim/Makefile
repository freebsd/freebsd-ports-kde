# $FreeBSD: branches/plasma5/KDE/deskutils/kdepim/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	kdepim
PORTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE PIM applications metaport

RUN_DEPENDS=	calendarjanitor:deskutils/akonadi-calendar-tools \
		akonadiconsole:deskutils/akonadiconsole \
		akregator:deskutils/akregator \
		blogilo:deskutils/blogilo \
		headerthemeeditor:deskutils/grantlee-editor \
		kaddressbook:deskutils/kaddressbook \
		kalarm:deskutils/kalarm \
		kmail_antivir.sh:deskutils/kdepim-addons \
		kleopatra:security/kleopatra \
		kmail:deskutils/kmail \
		knotes:deskutils/knotes \
		kontact:deskutils/kontact \
		korganizer:deskutils/korganizer \
		pimsettingexporter:deskutils/pim-data-exporter \
		akonadi_imap_resource:deskutils/kdepim-runtime

USES=		kde:5 metaport

.include <bsd.port.mk>
