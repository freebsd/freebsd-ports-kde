--- sdext/source/pdfimport/xpdfwrapper/pdfioutdev_gpl.cxx.orig	2025-01-26 06:06:21 UTC
+++ sdext/source/pdfimport/xpdfwrapper/pdfioutdev_gpl.cxx
@@ -1090,7 +1090,8 @@ void PDFOutDev::drawImageMask(GfxState* pState, Object
 
     int bitsPerComponent = 1;
     StreamColorSpaceMode csMode = streamCSNone;
-    str->getImageParams( &bitsPerComponent, &csMode );
+    bool hasAlpha = false;
+    str->getImageParams( &bitsPerComponent, &csMode, &hasAlpha );
     if( bitsPerComponent == 1 && (csMode == streamCSNone || csMode == streamCSDeviceGray) )
     {
         GfxRGB oneColor = { dblToCol( 1.0 ), dblToCol( 1.0 ), dblToCol( 1.0 ) };
@@ -1306,9 +1307,9 @@ poppler_bool PDFOutDev::tilingPatternFill(GfxState *st
         0, nBitmapWidth * nBitmapHeight, Object(objNull)));
     auto aDecode = Object(objNull);
     std::unique_ptr<GfxImageColorMap> pRgbIdentityColorMap(new GfxImageColorMap(8, &aDecode,
-        new GfxDeviceRGBColorSpace()));
+        std::make_unique<GfxDeviceRGBColorSpace>()));
     std::unique_ptr<GfxImageColorMap> pGrayIdentityColorMap(new GfxImageColorMap(8, &aDecode,
-        new GfxDeviceGrayColorSpace()));
+        std::make_unique<GfxDeviceGrayColorSpace>()));
 
     OutputBuffer aBuf; initBuf(aBuf);
     writePng_(aBuf, pRgbStr.get(), nBitmapWidth, nBitmapHeight, pRgbIdentityColorMap.get(),
