#include <napi.h>
#include <iostream>
#include <windows.h>
#include <string>

using namespace Napi;

Napi::Value ChangeDisplayOrientation(const Napi::CallbackInfo& info) {
    // Get orientation parameter
    std::string number = info[0].As<Napi::String>();

    DEVMODE mode;
    EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &mode);

    DWORD orientation = DMDO_DEFAULT;
    if (number == "0") {
        orientation = DMDO_DEFAULT;
    } else if (number == "180") {
        orientation = DMDO_180;
    }
    mode.dmDisplayOrientation = orientation;

    ChangeDisplaySettings(&mode, 0);

    return info.Env().Null();
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "ChangeDisplayOrientation"), Napi::Function::New(env, ChangeDisplayOrientation));
  return exports;
}

NODE_API_MODULE(ChangeDisplaySettings, Init)
