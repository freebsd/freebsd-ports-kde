Suppress spurious zero as null pointer constant warnings which cause errors
in www/dooble due to -Werror being passed. This is the same problem as in
qcompare.h that upstream suppresses for GCC.

/usr/local/include/qt6/QtCore/qfloat16.h:209:5: error: zero as null pointer constant [-Werror,-Wzero-as-null-pointer-constant]
...
/usr/local/include/qt6/QtCore/qcomparehelpers.h:211:43: note: expanded from macro 'QT_DECLARE_ORDERING_HELPER_TEMPLATE'
  211 |     { return compareThreeWay(lhs, rhs) >= 0; }

--- src/corelib/global/qcomparehelpers.h.orig	2024-08-08 08:58:52 UTC
+++ src/corelib/global/qcomparehelpers.h
@@ -242,6 +242,8 @@ template <typename In> constexpr auto to_Qt(In in) noe
 
 #define QT_DECLARE_ORDERING_HELPER_TEMPLATE(OrderingType, LeftType, RightType, Constexpr, \
                                             Noexcept, Attributes) \
+    QT_WARNING_PUSH \
+    QT_WARNING_DISABLE_CLANG("-Wzero-as-null-pointer-constant") \
     Attributes \
     friend Constexpr bool operator<(LeftType const &lhs, RightType const &rhs) Noexcept \
     { \
@@ -256,7 +258,8 @@ template <typename In> constexpr auto to_Qt(In in) noe
     { return is_lteq(compareThreeWay(lhs, rhs)); } \
     Attributes \
     friend Constexpr bool operator>=(LeftType const &lhs, RightType const &rhs) Noexcept \
-    { return is_gteq(compareThreeWay(lhs, rhs)); }
+    { return is_gteq(compareThreeWay(lhs, rhs)); } \
+    QT_WARNING_POP
 
 #define QT_DECLARE_ORDERING_HELPER_PARTIAL(LeftType, RightType, Constexpr, Noexcept, Attributes) \
     QT_DECLARE_ORDERING_HELPER_TEMPLATE(Qt::partial_ordering, LeftType, RightType, Constexpr, \
@@ -279,6 +282,8 @@ template <typename In> constexpr auto to_Qt(In in) noe
 // Helpers for reversed ordering, using the existing compareThreeWay() function.
 #define QT_DECLARE_REVERSED_ORDERING_HELPER_TEMPLATE(OrderingType, LeftType, RightType, Constexpr, \
                                                      Noexcept, Attributes) \
+    QT_WARNING_PUSH \
+    QT_WARNING_DISABLE_CLANG("-Wzero-as-null-pointer-constant") \
     Attributes \
     friend Constexpr bool operator<(RightType const &lhs, LeftType const &rhs) Noexcept \
     { return is_gt(compareThreeWay(rhs, lhs)); } \
@@ -290,7 +295,8 @@ template <typename In> constexpr auto to_Qt(In in) noe
     { return is_gteq(compareThreeWay(rhs, lhs)); } \
     Attributes \
     friend Constexpr bool operator>=(RightType const &lhs, LeftType const &rhs) Noexcept \
-    { return is_lteq(compareThreeWay(rhs, lhs)); }
+    { return is_lteq(compareThreeWay(rhs, lhs)); } \
+    QT_WARNING_POP
 
 #define QT_DECLARE_REVERSED_ORDERING_HELPER_PARTIAL(LeftType, RightType, Constexpr, Noexcept, \
                                                     Attributes) \
