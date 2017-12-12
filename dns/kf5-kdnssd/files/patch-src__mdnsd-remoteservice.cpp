--- src/mdnsd-remoteservice.cpp.orig	2017-12-11 01:55:18.840259000 +0100
+++ src/mdnsd-remoteservice.cpp	2017-12-11 01:56:24.152243000 +0100
@@ -82,8 +82,8 @@
     d->m_resolved = false;
     //qDebug() << this << ":Starting resolve of : " << d->m_serviceName << " " << d->m_type << " " << d->m_domain << "\n";
     DNSServiceRef ref;
-    if (DNSServiceResolve(&ref, 0, 0, d->m_serviceName.toUtf8(), d->m_type.toLatin1().constData(),
-                          domainToDNS(d->m_domain), (DNSServiceResolveReply)resolve_callback, reinterpret_cast<void *>(d))
+    if (DNSServiceResolve(&ref, 0, 0, qUtf8Printable(d->m_serviceName), d->m_type.toLatin1().constData(),
+                          domainToDNS(d->m_domain).constData(), (DNSServiceResolveReply)resolve_callback, reinterpret_cast<void *>(d))
             == kDNSServiceErr_NoError) {
         d->setRef(ref);
     }
