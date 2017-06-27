Resolve ambiguity in std::abs

--- src/lib/marble/ViewportParams.cpp.orig	2017-06-23 20:47:26.544675000 +0000
+++ src/lib/marble/ViewportParams.cpp	2017-06-23 20:47:44.257940000 +0000
@@ -95,7 +95,7 @@
       m_planetAxis(),
       m_planetAxisMatrix(),
       m_radius( radius ),
-      m_angularResolution(4.0 / std::abs(m_radius)),
+      m_angularResolution(4.0 / std::abs((float)m_radius)),
       m_size( size ),
       m_dirtyBox( true ),
       m_viewLatLonAltBox()
