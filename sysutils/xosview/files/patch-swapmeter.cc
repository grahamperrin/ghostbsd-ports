--- bsd/swapmeter.cc.orig	Tue Aug 21 10:52:35 2001
+++ bsd/swapmeter.cc	Tue Aug 21 10:53:02 2001
@@ -76,3 +76,3 @@
 void SwapMeter::getswapinfo( void ){
-  int total_int, free_int;
+  long total_int, free_int;
 
