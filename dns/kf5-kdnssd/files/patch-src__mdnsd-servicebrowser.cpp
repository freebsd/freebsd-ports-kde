--- src/mdnsd-servicebrowser.cpp.orig	2017-12-11 01:51:26.363836000 +0100
+++ src/mdnsd-servicebrowser.cpp	2017-12-11 01:51:58.474917000 +0100
@@ -100,7 +100,7 @@
         fullType = d->m_subtype + "._sub." + d->m_type;
     }
     if (DNSServiceBrowse(&ref, 0, 0, fullType.toLatin1().constData(),
-                         domainToDNS(d->m_domain), query_callback, reinterpret_cast<void *>(d))
+                         domainToDNS(d->m_domain).constData(), query_callback, reinterpret_cast<void *>(d))
             == kDNSServiceErr_NoError) {
         d->setRef(ref);
     }
