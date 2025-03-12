#include "JailbreakSupportChecker.h"
#include <unordered_set>

bool IsDeviceJailbreakSupported(const std::string& deviceModel)
{
    // قائمة الأجهزة التي تدعم كسر الحماية
    std::unordered_set<std::string> supportedDevices = {
        "iPhone6,1",  // iPhone 5s (Global)
        "iPhone6,2",  // iPhone 5s (GSM)
        "iPhone7,1",  // iPhone 6 Plus
        "iPhone7,2",  // iPhone 6
        "iPhone8,1",  // iPhone 6s
        "iPhone8,2",  // iPhone 6s Plus
        "iPhone8,4",  // iPhone SE
        "iPhone9,1",  // iPhone 7
        "iPhone9,3",  // iPhone 7
        "iPhone9,2",  // iPhone 7 Plus
        "iPhone9,4",  // iPhone 7 Plus
        "iPhone10,1", // iPhone 8
        "iPhone10,4", // iPhone 8
        "iPhone10,2", // iPhone 8 Plus
        "iPhone10,5", // iPhone 8 Plus
        "iPhone10,3", // iPhone X
        "iPhone10,6"  // iPhone X
    };

    // التحقق مما إذا كان الجهاز مدعوماً
    return supportedDevices.find(deviceModel) != supportedDevices.end();
}
