# $FreeBSD$

PORTNAME=	kde-l10n
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Localized messages and documentation for KDE

USES=		metaport kde:5

KDE_LANG_ALL=	ar bg bs ca ca@valencia cs da de el en_GB es et eu fa \
		fi fr ga gl he hi hr hu ia id is it ja kk km ko lt lv mr nb \
		nds nl nn pa pl pt pt_BR ro ru sk sl sr sv tr ug \
		uk wa zh_CN zh_TW

ar_PORT=	arabic/kde-l10n
ca@valencia_PORT=	misc/kde-l10n-ca_valencia
de_PORT=	german/kde-l10n
fr_PORT=	french/kde-l10n
he_PORT=	hebrew/kde-l10n
hu_PORT=	hungarian/kde-l10n
ja_PORT=	japanese/kde-l10n
ko_PORT=	korean/kde-l10n
pl_PORT=	polish/kde-l10n
pt_BR_PORT=	portuguese/kde-l10n-pt_BR
pt_PORT=	portuguese/kde-l10n
ru_PORT=	russian/kde-l10n
uk_PORT=	ukrainian/kde-l10n
vi_PORT=	vietnamese/kde-l10n
zh_CN_PORT=	chinese/kde-l10n-zh_CN
zh_TW_PORT=	chinese/kde-l10n-zh_TW

.include <${.CURDIR:H:H}/misc/kde-l10n/files/kde-lang-names>
# kde4-lang-names is encoded in UTF, override with plain ASCII:
nb_NAME=	Norwegian Bokmal

OPTIONS_DEFINE=	ALL ${LANG_OPT_ALL}
OPTIONS_DEFAULT=	ALL

ALL_DESC=	All localizations

.  for lang in ${KDE_LANG_ALL}
${lang}_DETECT?=	${KDE_PREFIX}/share/locale/${lang}/entry.desktop

${lang}_PORT?=		misc/kde-l10n-${lang}
${lang}_NAME?=		${lang}

${lang}_OPT=		${lang:S/@/_/}
LANG_OPT_ALL+=		${${lang}_OPT}
${${lang}_OPT}_DESC=	${${lang}_NAME} localization
${${lang}_OPT}_RUN_DEPENDS=	${${lang}_DETECT}:${${lang}_PORT}
.  endfor

.  for opt in ${LANG_OPT_ALL}
ALL_RUN_DEPENDS+=	${${opt}_RUN_DEPENDS}
.  endfor

.include <bsd.port.mk>
