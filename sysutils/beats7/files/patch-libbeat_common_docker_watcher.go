--- libbeat/common/docker/watcher.go.orig	2021-07-04 13:42:29 UTC
+++ libbeat/common/docker/watcher.go
@@ -15,7 +15,7 @@
 // specific language governing permissions and limitations
 // under the License.
 
-// +build linux darwin windows
+// +build linux darwin windows freebsd
 
 package docker
 
