--- src/mdnsd-publicservice.cpp.orig	2017-12-11 01:58:25.980073000 +0100
+++ src/mdnsd-publicservice.cpp	2017-12-11 02:04:00.008204000 +0100
@@ -160,7 +160,7 @@
     TXTRecordCreate(&txt, 0, 0);
     QMap<QString, QByteArray>::ConstIterator itEnd = d->m_textData.cend();
     for (QMap<QString, QByteArray>::ConstIterator it = d->m_textData.cbegin(); it != itEnd; ++it) {
-        if (TXTRecordSetValue(&txt, it.key().toUtf8(), it.value().length(), it.value()) != kDNSServiceErr_NoError) {
+        if (TXTRecordSetValue(&txt, qUtf8Printable(it.key()), it.value().length(), it.value().constData()) != kDNSServiceErr_NoError) {
             TXTRecordDeallocate(&txt);
             emit published(false);
             return;
@@ -171,7 +171,7 @@
     Q_FOREACH (const QString &subtype, d->m_subtypes) {
         fullType += ',' + subtype;
     }
-    if (DNSServiceRegister(&ref, 0, 0, d->m_serviceName.toUtf8(), fullType.toLatin1().constData(), domainToDNS(d->m_domain), NULL,
+    if (DNSServiceRegister(&ref, 0, 0, qUtf8Printable(d->m_serviceName), fullType.toLatin1().constData(), domainToDNS(d->m_domain).constData(), NULL,
                            htons(d->m_port), TXTRecordGetLength(&txt), TXTRecordGetBytesPtr(&txt), publish_callback,
                            reinterpret_cast<void *>(d)) == kDNSServiceErr_NoError) {
         d->setRef(ref);
