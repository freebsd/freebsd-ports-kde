--- src/pdfdocument.cpp.orig	2018-12-09 09:38:02 UTC
+++ src/pdfdocument.cpp
@@ -306,7 +306,7 @@ QString PdfPage::textInRect(double left, double top, d
     const auto pageRect = d->m_doc->m_popplerDoc->getPage(d->m_pageNum + 1)->getCropBox();
     std::unique_ptr<GooString> s(device->getText(ratio(pageRect->x1, pageRect->x2, left), ratio(pageRect->y1, pageRect->y2, top),
                                                  ratio(pageRect->x1, pageRect->x2, right), ratio(pageRect->y1, pageRect->y2, bottom)));
-    return QString::fromUtf8(s->getCString());
+    return QString::fromUtf8(s->c_str());
 #else
     Q_UNUSED(left);
     Q_UNUSED(top);
@@ -440,7 +440,7 @@ PdfDocument* PdfDocument::fromData(const QByteArray &d
         PdfPage page;
         page.d->m_pageNum = i;
         page.d->m_doc = doc->d.get();
-        page.d->m_text = QString::fromUtf8(s->getCString());
+        page.d->m_text = QString::fromUtf8(s->c_str());
         page.d->m_images = std::move(device->m_images);
         for (auto it = page.d->m_images.begin(); it != page.d->m_images.end(); ++it) {
             (*it).d->m_page = page.d.data();
