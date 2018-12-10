--- scribus/plugins/import/pdf/importpdf.h.orig	2018-12-09 00:00:21 UTC
+++ scribus/plugins/import/pdf/importpdf.h
@@ -81,7 +81,7 @@ class PdfPlug : public QObject (public)
 private:
 	bool convert(const QString& fn);
 	QRectF getCBox(int box, int pgNum);
-	QString UnicodeParsedString(GooString *s1);
+	QString UnicodeParsedString(const GooString *s1);
 	
 	QList<PageItem*> Elements;
 	double baseX, baseY;
