--- components/viz/host/host_display_client.cc.orig	2022-10-01 07:40:07 UTC
+++ components/viz/host/host_display_client.cc
@@ -61,7 +61,7 @@ void HostDisplayClient::CreateLayeredWindowUpdater(
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 void HostDisplayClient::DidCompleteSwapWithNewSize(const gfx::Size& size) {
   NOTIMPLEMENTED();
 }
