--- components/autofill/core/browser/data_manager/payments/payments_data_manager.h.orig	2025-04-15 08:30:07 UTC
+++ components/autofill/core/browser/data_manager/payments/payments_data_manager.h
@@ -354,7 +354,7 @@ class PaymentsDataManager : public AutofillWebDataServ
   void SetAutofillHasSeenIban();
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Returns the value of the kAutofillHasSeenBnpl pref.
   bool IsAutofillHasSeenBnplPrefEnabled() const;
 
