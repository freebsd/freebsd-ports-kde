--- ./ktorrent/dialogs/torrentcreatordlg.cpp.orig	2017-07-20 01:47:14.647256000 +0200
+++ ./ktorrent/dialogs/torrentcreatordlg.cpp	2017-07-20 01:51:53.206938000 +0200
@@ -19,6 +19,8 @@
  *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
  ***************************************************************************/
 
+#include <time.h>
+
 #include <QCompleter>
 
 #include <KFileWidget>
@@ -26,6 +28,7 @@
 #include <KRecentDirs>
 
 #include <dht/dht.h>
+#include <dht/dhtbase.h>
 #include <torrent/globals.h>
 #include <groups/group.h>
 #include <groups/groupmanager.h>
@@ -35,6 +38,7 @@
 #include "gui.h"
 #include "torrentcreatordlg.h"
 #include <util/error.h>
+#include <util/log.h>
 
 
 using namespace bt;
