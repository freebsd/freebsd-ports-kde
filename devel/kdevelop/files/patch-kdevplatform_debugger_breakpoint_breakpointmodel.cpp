--- kdevplatform/debugger/breakpoint/breakpointmodel.cpp.orig	2024-05-02 18:51:22 UTC
+++ kdevplatform/debugger/breakpoint/breakpointmodel.cpp
@@ -309,8 +309,10 @@ void BreakpointModel::reloaded(KTextEditor::Document* 
     switch (d->reloadState) {
     case ReloadState::Idle:
         Q_ASSERT_X(false, Q_FUNC_INFO, "KTextEditor::Document did not emit aboutToReload() before reloaded().");
+        break;
     case ReloadState::StartedReloading:
         // Moving cursors have not been invalidated, because the user opted to cancel reloading.
+        [[fallthrough]];
     case ReloadState::ZeroBreakpoints:
         // There are no breakpoints at the reloaded document's URL.
         break; // nothing to do
