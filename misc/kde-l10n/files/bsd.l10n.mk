MASTER_SITES?=	KDE/${KDE_APPLICATIONS_BRANCH}/applications/${KDE_APPLICATIONS_VERSION}/src/kde-l10n/
PKGNAMEPREFIX=	${KDE_L10N:S/@/_/}-
DISTNAME=	kde-l10n-${KDE_L10N}-${KDE_APPLICATIONS_VERSION}
DIST_SUBDIR?=	KDE/applications/${KDE_APPLICATIONS_VERSION}/kde-l10n

DESCR?=		${.CURDIR:H:H}/misc/kde-l10n/pkg-descr
DISTINFO_FILE?=	${.CURDIR:H:H}/misc/kde-l10n/distinfo

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	ecm_build doctools_build
USE_QT5=	buildtools_build qmake_build linguisttools_build

# For the 4/ subdirectory we require Qt4 tools, automoc and kdelibs.
# For this, we cannot use USE_QT4= and USE_KDE as the framework only
# support to choose one version.
# Therefore depend on these via BUILD_DEPENDS.
BUILD_DEPENDS+=	${KDE_PREFIX}/bin/automoc4:devel/automoc4 \
		${PREFIX}/lib/qt4/bin/moc:devel/qt4-moc \
		${PREFIX}/lib/qt4/bin/qmake:devel/qt4-qmake \
		${PREFIX}/lib/qt4/bin/rcc:devel/qt4-rcc \
		${PREFIX}/lib/qt4/bin/uic:devel/qt4-uic \
		${PREFIX}/libdata/pkgconfig/QtXml.pc:textproc/qt4-xml \
		${KDE_PREFIX}/bin/meinproc4:x11/kdelibs4

NO_ARCH=	YES

# Support for spelling dictionaries
${KDE_L10N}_CATEGORY?=	textproc
ar_CATEGORY=	arabic
de_CATEGORY=	german
fr_CATEGORY=	french
he_CATEGORY=	hebrew
hu_CATEGORY=	hungarian
ko_CATEGORY=	korean
pl_CATEGORY=	polish
pt_BR_CATEGORY=	portuguese
pt_CATEGORY=	portuguese
ru_CATEGORY=	russian
uk_CATEGORY=	ukrainian
vi_CATEGORY=	vietnamese

en_GB_aspell_PORT_PREFIX=	en-
en_GB_aspell_DETECT_PREFIX=	en-
en_GB_hunspell_PORT_PREFIX=	en-
en_GB_hunspell_DETECT_PREFIX=	en-

ca@valencia_aspell_PORT_PREFIX=		ca-
ca@valencia_aspell_DETECT_PREFIX=	ca-

he_aspell_DETECT_PREFIX=	iw-
he_hunspell_DETECT_PREFIX=	iw-

pt_BR_aspell_PORT_SUFFIX=	-pt_BR
pt_BR_hunspell_DETECT_PREFIX=	pt-

pt_aspell_PORT_SUFFIX=		-pt_PT
pt_aspell_DETECT_PREFIX=	pt_PT-

.for i in ar de fr he hu ko pl pt_BR pt ru uk vi
${i}_aspell_PORT_PREFIX=	#
${i}_hunspell_PORT_PREFIX=	#
.endfor

.for i in aspell hunspell
${KDE_L10N}_${i}_DETECT_PREFIX?=	${KDE_L10N}-
${KDE_L10N}_${i}_DETECT_SUFFIX?=	#
${KDE_L10N}_${i}_DETECT?=	${${KDE_L10N}_${i}_DETECT_PREFIX}${i}${${KDE_L10N}_${i}_DETECT_SUFFIX}>=0

${KDE_L10N}_${i}_PORT_PREFIX?=	${KDE_L10N}-
${KDE_L10N}_${i}_PORT_SUFFIX?=	#
${KDE_L10N}_${i}_PORT?=	${${KDE_L10N}_CATEGORY}/${${KDE_L10N}_${i}_PORT_PREFIX}${i}${${KDE_L10N}_${i}_PORT_SUFFIX}
.endfor

.if exists(${.CURDIR:H:H}/${${KDE_L10N}_aspell_PORT}/Makefile)
OPTIONS_DEFINE+=	ASPELL
ASPELL_DESC=		Install aspell dictionary
.endif

.if exists(${.CURDIR:H:H}/${${KDE_L10N}_hunspell_PORT}/Makefile)
OPTIONS_DEFINE+=	HUNSPELL
HUNSPELL_DESC=		Install hunspell dictionary
.endif

ASPELL_RUN_DEPENDS+=	${${KDE_L10N}_aspell_DETECT}:${${KDE_L10N}_aspell_PORT}
HUNSPELL_RUN_DEPENDS+=	${${KDE_L10N}_hunspell_DETECT}:${${KDE_L10N}_hunspell_PORT}

# Patch in QT_SELECT=qt[45].
EXTRA_PATCHES=		${.CURDIR:H:H}/misc/kde-l10n/files/extrapatch-qt-environment

# Remove conflicting files from stage dir -- as for example kde-l10n-sr installs
# files to sr, sr@latin, sr@ijekavian, ${KDE_L10N} needs to be wildcarded.
# These files are installed by kf5-* or plasma5-* ports already.
DO_NOT_INSTALL=	share/doc/HTML/${KDE_L10N}*/knetattach \
		share/doc/HTML/${KDE_L10N}*/kdesu \
		share/locale/${KDE_L10N}*/LC_MESSAGES/attica_kde.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/baloo_file.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/baloo_file_extractor.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/baloosearch.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/balooshow.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/drkonqi.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/filetypes.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcm_baloofile.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcm_device_automounter.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcm_emoticons.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcm_phonon.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcmcomponentchooser.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcmicons.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcmkded.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcmnotify.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kcmshell.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kdesu.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kfilemetadata.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kio_applications.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kio_baloosearch.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kio_remote.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kio_tags.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kio_timeline.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kioclient.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kmimetypefinder.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/knetattach.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/kstart.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/ktraderclient.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/phonon_kde.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/plasma_runner_baloosearchrunner.mo \
		share/locale/${KDE_L10N}*/LC_MESSAGES/soliduiserver.mo

post-install:
.for dni in ${DO_NOT_INSTALL}
	${RM} -r ${STAGEDIR}${KDE_PREFIX}/${dni}
.endfor
