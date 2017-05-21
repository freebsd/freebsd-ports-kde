--- format.cpp.orig	2015-11-20 16:49:40 UTC
+++ format.cpp
@@ -460,13 +460,13 @@ void FDFormat::processStdOut()
 	QString s = theProcess->readAllStandardOutput();
 
 #ifdef ANY_BSD
-	if (b[0]=='F')
+	if (s[0]=='F')
 	{
 		formatTrackCount++;
 		emit status(QString::null,	//krazy:exclude=nullstrassign for old broken gcc
 			formatTrackCount * 100 / deviceInfo->tracks);
 	}
-	else if (b[0]=='E')
+	else if (s[0]=='E')
 	{
 		emit status(i18n("Error formatting track %1.", formatTrackCount),-1);
 	}
