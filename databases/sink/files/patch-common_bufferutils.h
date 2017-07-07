--- common/bufferutils.h.orig	2017-04-19 11:59:25 UTC
+++ common/bufferutils.h
@@ -38,7 +38,7 @@ static flatbuffers::Offset<flatbuffers::Vector<flatbuf
 {
     std::vector<flatbuffers::Offset<flatbuffers::String>> modifiedPropertiesList;
     for (const auto &change : list) {
-        auto s = fbb.CreateString(change);
+        auto s = fbb.CreateString(change.toStdString());
         modifiedPropertiesList.push_back(s);
     }
     return fbb.CreateVector(modifiedPropertiesList);
