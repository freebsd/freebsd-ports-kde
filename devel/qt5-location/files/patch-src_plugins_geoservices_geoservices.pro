--- src/plugins/geoservices/geoservices.pro.orig	2017-11-10 10:54:34 UTC
+++ src/plugins/geoservices/geoservices.pro
@@ -7,12 +7,3 @@ qtConfig(geoservices_mapbox): SUBDIRS += mapbox
 qtConfig(geoservices_esri): SUBDIRS += esri
 qtConfig(geoservices_itemsoverlay): SUBDIRS += itemsoverlay
 qtConfig(geoservices_osm): SUBDIRS += osm
-
-qtConfig(geoservices_mapboxgl) {
-    !exists(../../3rdparty/mapbox-gl-native/mapbox-gl-native.pro) {
-        warning("Submodule mapbox-gl-native does not exist. Run 'git submodule update --init' on qtlocation.")
-    } else {
-        SUBDIRS += mapboxgl ../../3rdparty/mapbox-gl-native
-        mapboxgl.depends = ../../3rdparty/mapbox-gl-native
-    }
-}
