Fix the build with clang < 3.5 (i.e. FreeBSD 10 base clang). It has problems
with the std::bind() call below (no, -fPIC is not the real issue):

/usr/bin/ld: ../../../lib/libwidgets.a(pageview.cpp.o): relocation
R_X86_64_PC32 against
`_ZNSt3__18__invokeIRM21QSortFilterProxyModelKF11QModelIndexRKS2_ERP
N12Presentation24ArtifactFilterProxyModelEJS4_EvEEDTcldsdeclsr3std3__1E7forwardIT0_Efp0_Efp_spclsr3std3__1E7forwardIT1_Efp1_EEEOT_OSC_DpOSD_'
can not be used when making a shared object; recompile with -fPIC

Just unroll std::transform() to work around it.
--- src/widgets/pageview.cpp.orig	2016-01-11 08:58:27 UTC
+++ src/widgets/pageview.cpp
@@ -232,9 +232,8 @@ QModelIndexList PageView::selectedIndexe
     const auto selection = m_centralView->selectionModel()->selectedIndexes();
 
     auto sourceIndices = QModelIndexList();
-    std::transform(selection.constBegin(), selection.constEnd(),
-                   std::back_inserter(sourceIndices ),
-                   std::bind(&QSortFilterProxyModel::mapToSource, m_filterWidget->proxyModel(), _1));
+    for (auto iter = selection.constBegin(); iter != selection.constEnd(); ++iter)
+      sourceIndices.append(m_filterWidget->proxyModel()->mapToSource(*iter));
 
     return sourceIndices;
 }
