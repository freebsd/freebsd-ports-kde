# $FreeBSD$

PORTNAME=	kde-dev-scripts
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE development scripts

USES=		cmake:outsource kde:4 perl5 python:run shebangfix tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

SHEBANG_FILES=	cxxmetric \
		draw_lib_dependencies \
		fixkdeincludes \
		fixuifiles \
		grantlee_strings_extractor.py \
		kde-systemsettings-tree.py \
		kde_generate_export_header \
		kdelnk2desktop.py \
		krazy-licensecheck \
		png2mng.pl \
		svnintegrate \
		reviewboard-am \
		kde_generate_export_header \
		zonetab2pot.py

.include <bsd.port.mk>
