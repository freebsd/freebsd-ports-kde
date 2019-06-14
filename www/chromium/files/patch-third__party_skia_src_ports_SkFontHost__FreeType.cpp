--- third_party/skia/src/ports/SkFontHost_FreeType.cpp.orig	2019-06-04 18:58:12 UTC
+++ third_party/skia/src/ports/SkFontHost_FreeType.cpp
@@ -128,8 +128,6 @@ class FreeTypeLibrary : SkNoncopyable { (public)
         : fGetVarDesignCoordinates(nullptr)
         , fGetVarAxisFlags(nullptr)
         , fLibrary(nullptr)
-        , fIsLCDSupported(false)
-        , fLCDExtra(0)
     {
         if (FT_New_Library(&gFTMemory, &fLibrary)) {
             return;
@@ -189,12 +187,7 @@ class FreeTypeLibrary : SkNoncopyable { (public)
         }
 #endif
 
-        // Setup LCD filtering. This reduces color fringes for LCD smoothed glyphs.
-        // The default has changed over time, so this doesn't mean the same thing to all users.
-        if (FT_Library_SetLcdFilter(fLibrary, FT_LCD_FILTER_DEFAULT) == 0) {
-            fIsLCDSupported = true;
-            fLCDExtra = 2; //Using a filter adds one full pixel to each side.
-        }
+        FT_Library_SetLcdFilter(fLibrary, FT_LCD_FILTER_DEFAULT);
     }
     ~FreeTypeLibrary() {
         if (fLibrary) {
@@ -203,8 +196,6 @@ class FreeTypeLibrary : SkNoncopyable { (public)
     }
 
     FT_Library library() { return fLibrary; }
-    bool isLCDSupported() { return fIsLCDSupported; }
-    int lcdExtra() { return fLCDExtra; }
 
     // FT_Get_{MM,Var}_{Blend,Design}_Coordinates were added in FreeType 2.7.1.
     // Prior to this there was no way to get the coordinates out of the FT_Face.
@@ -221,8 +212,6 @@ class FreeTypeLibrary : SkNoncopyable { (public)
 
 private:
     FT_Library fLibrary;
-    bool fIsLCDSupported;
-    int fLCDExtra;
 
     // FT_Library_SetLcdFilterWeights was introduced in FreeType 2.4.0.
     // The following platforms provide FreeType of at least 2.4.0.
@@ -718,17 +707,6 @@ void SkTypeface_FreeType::onFilterRec(SkScalerContextR
         rec->fTextSize = SkIntToScalar(1 << 14);
     }
 
-    if (isLCD(*rec)) {
-        // TODO: re-work so that FreeType is set-up and selected by the SkFontMgr.
-        SkAutoMutexAcquire ama(gFTMutex);
-        ref_ft_library();
-        if (!gFTLibrary->isLCDSupported()) {
-            // If the runtime Freetype library doesn't support LCD, disable it here.
-            rec->fMaskFormat = SkMask::kA8_Format;
-        }
-        unref_ft_library();
-    }
-
     SkFontHinting h = rec->getHinting();
     if (kFull_SkFontHinting == h && !isLCD(*rec)) {
         // collapse full->normal hinting if we're not doing LCD
@@ -1121,11 +1099,11 @@ bool SkScalerContext_FreeType::getCBoxForLetter(char l
 void SkScalerContext_FreeType::updateGlyphIfLCD(SkGlyph* glyph) {
     if (glyph->fMaskFormat == SkMask::kLCD16_Format) {
         if (fLCDIsVert) {
-            glyph->fHeight += gFTLibrary->lcdExtra();
-            glyph->fTop -= gFTLibrary->lcdExtra() >> 1;
+            glyph->fHeight += 2;
+            glyph->fTop -= 1;
         } else {
-            glyph->fWidth += gFTLibrary->lcdExtra();
-            glyph->fLeft -= gFTLibrary->lcdExtra() >> 1;
+            glyph->fWidth += 2;
+            glyph->fLeft -= 1;
         }
     }
 }
