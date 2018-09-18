--- daemon/backends/upower/powerdevilupowerbackend.cpp.orig	2018-09-13 17:05:32 UTC
+++ daemon/backends/upower/powerdevilupowerbackend.cpp
@@ -39,7 +39,7 @@
 #include "ddcutilbrightness.h"
 #include "upowersuspendjob.h"
 #include "login1suspendjob.h"
-#include "udevqt.h"
+//#include "udevqt.h"
 
 #define HELPER_ID "org.kde.powerdevil.backlighthelper"
 
@@ -189,8 +189,10 @@ void PowerDevilUPowerBackend::init()
 
                             m_isLedBrightnessControl = m_syspath.contains(QLatin1String("/leds/"));
                             if (!m_isLedBrightnessControl) {
+/*
                                 UdevQt::Client *client =  new UdevQt::Client(QStringList("backlight"), this);
                                 connect(client, SIGNAL(deviceChanged(UdevQt::Device)), SLOT(onDeviceChanged(UdevQt::Device)));
+*/
                             }
 
                             Q_EMIT brightnessSupportQueried(m_brightnessMax > 0);
@@ -327,6 +329,7 @@ void PowerDevilUPowerBackend::initWithBrightness(bool 
 
 void PowerDevilUPowerBackend::onDeviceChanged(const UdevQt::Device &device)
 {
+    /*
     qCDebug(POWERDEVIL) << "Udev device changed" << m_syspath << device.sysfsPath();
     if (device.sysfsPath() != m_syspath) {
         return;
@@ -342,6 +345,7 @@ void PowerDevilUPowerBackend::onDeviceChanged(const Ud
         m_cachedBrightnessMap[Screen] = newBrightness;
         onBrightnessChanged(Screen, newBrightness, maxBrightness);
     }
+    */
 }
 
 int PowerDevilUPowerBackend::brightnessKeyPressed(PowerDevil::BrightnessLogic::BrightnessKeyType type, BrightnessControlType controlType)
