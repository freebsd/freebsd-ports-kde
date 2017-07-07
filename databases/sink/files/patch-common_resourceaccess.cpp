--- common/resourceaccess.cpp.orig	2017-06-30 20:35:01 UTC
+++ common/resourceaccess.cpp
@@ -477,7 +477,7 @@ void ResourceAccess::connected()
 
     {
         flatbuffers::FlatBufferBuilder fbb;
-        auto name = fbb.CreateString(QString("PID: %1 ResourceAccess: %2").arg(QCoreApplication::applicationPid()).arg(reinterpret_cast<qlonglong>(this)).toLatin1());
+        auto name = fbb.CreateString(QString("PID: %1 ResourceAccess: %2").arg(QCoreApplication::applicationPid()).arg(reinterpret_cast<qlonglong>(this)).toStdString());
         auto command = Sink::Commands::CreateHandshake(fbb, name);
         Sink::Commands::FinishHandshakeBuffer(fbb, command);
         Commands::write(d->socket.data(), ++d->messageId, Commands::HandshakeCommand, fbb);
