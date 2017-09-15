# $FreeBSD: branches/plasma5/KDE/misc/kwordquiz/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	kwordquiz
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Flash card trainer for KDE Applications

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config configwidgets crash doctools ecm emoticons guiaddons \
		i18n iconthemes init itemmodels itemviews kdeclarative \
		kdelibs4support kio libkeduvocdocument newstuff notifications \
		notifyconfig sonnet xmlgui
USE_QT5=	buildtools_build core gui phonon4 printsupport \
		qmake_build widgets

.include <bsd.port.mk>
