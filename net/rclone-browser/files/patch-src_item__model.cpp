--- src/item_model.cpp.orig	2017-03-11 22:16:36 UTC
+++ src/item_model.cpp
@@ -10,7 +10,7 @@ namespace
         QChar current = text[spinnerPos];
         static const QChar spinner[] = { '-', '\\', '|', '/' };
         size_t spinnerCount = sizeof(spinner) / sizeof(*spinner);
-        const QChar* found = qFind(spinner, spinner + spinnerCount, current);
+        const QChar* found = std::find(spinner, spinner + spinnerCount, current);
         size_t idx = found - spinner;
         size_t next = idx == spinnerCount - 1 ? 0 : idx + 1;
         text[spinnerPos] = spinner[next];
@@ -161,7 +161,7 @@ void ItemModel::rename(const QModelIndex& index, const
 {
     Item* item = get(index);
     item->name = name;
-    item->path = item->parent->path.filePath(item->name);
+    item->path.setPath(item->parent->path.filePath(item->name));
     emit dataChanged(index, index, QVector<int>{Qt::DisplayRole});
 }
 
@@ -182,7 +182,7 @@ QModelIndex ItemModel::addRoot(const QString& name, co
     Item* item = new Item();
     item->isFolder = true;
     item->name = name;
-    item->path = path;
+    item->path.setPath(path);
     item->parent = mRoot;
     mRoot->childs.append(item);
 
@@ -500,7 +500,7 @@ void ItemModel::load(const QPersistentModelIndex& pare
             auto it = existing.find(item->name);
             if (it == existing.end())
             {
-                item->path = parent->path.filePath(item->name);
+                item->path.setPath(parent->path.filePath(item->name));
                 if (!item->isFolder && mFileIcons)
                 {
                     QString ext = QFileInfo(item->name).suffix();
