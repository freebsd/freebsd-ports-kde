--- kded/kbuildsycoca.cpp.orig	2015-05-07 17:19:13 UTC
+++ kded/kbuildsycoca.cpp
@@ -311,7 +311,7 @@ bool KBuildSycoca::build()
      if (!m_trackId.isEmpty())
         g_vfolder->setTrackId(m_trackId);
 
-     VFolderMenu::SubMenu *kdeMenu = g_vfolder->parseMenu("applications.menu", true);
+     VFolderMenu::SubMenu *kdeMenu = g_vfolder->parseMenu("kde4-applications.menu", true);
 
      KServiceGroup::Ptr entry = g_buildServiceGroupFactory->addNew("/", kdeMenu->directoryFile, KServiceGroup::Ptr(), false);
      entry->setLayoutInfo(kdeMenu->layoutList);
