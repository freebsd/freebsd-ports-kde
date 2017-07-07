--- common/pipeline.cpp.orig	2017-06-30 20:32:03 UTC
+++ common/pipeline.cpp
@@ -301,8 +301,8 @@ KAsync::Job<qint64> Pipeline::modifiedEntity(void cons
                     SinkTraceCtx(d->logCtx) << "Move of " << current.identifier() << "was successfull";
                     if (isMove) {
                         flatbuffers::FlatBufferBuilder fbb;
-                        auto entityId = fbb.CreateString(current.identifier());
-                        auto type = fbb.CreateString(bufferType);
+                        auto entityId = fbb.CreateString(current.identifier().toStdString());
+                        auto type = fbb.CreateString(bufferType.toStdString());
                         auto location = Sink::Commands::CreateDeleteEntity(fbb, current.revision(), entityId, type, true);
                         Sink::Commands::FinishDeleteEntityBuffer(fbb, location);
                         const auto data = BufferUtils::extractBuffer(fbb);
@@ -448,8 +448,8 @@ void Preprocessor::createEntity(const Sink::Applicatio
     const auto entityBuffer = BufferUtils::extractBuffer(entityFbb);
 
     flatbuffers::FlatBufferBuilder fbb;
-    auto entityId = fbb.CreateString(entity.identifier());
-    auto type = fbb.CreateString(typeName);
+    auto entityId = fbb.CreateString(entity.identifier().toStdString());
+    auto type = fbb.CreateString(typeName.toStdString());
     auto delta = Sink::EntityBuffer::appendAsVector(fbb, entityBuffer.constData(), entityBuffer.size());
     auto location = Sink::Commands::CreateCreateEntity(fbb, entityId, type, delta);
     Sink::Commands::FinishCreateEntityBuffer(fbb, location);
