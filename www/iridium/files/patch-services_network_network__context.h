--- services/network/network_context.h.orig	2025-05-07 06:48:23 UTC
+++ services/network/network_context.h
@@ -715,7 +715,7 @@ class COMPONENT_EXPORT(NETWORK_SERVICE) NetworkContext
    public:
     explicit NetworkContextHttpAuthPreferences(NetworkService* network_service);
     ~NetworkContextHttpAuthPreferences() override;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     bool AllowGssapiLibraryLoad() const override;
 #endif  // BUILDFLAG(IS_LINUX)
    private:
