#include <napi.h>
#include <windows.h>

using namespace Napi;

Napi::String Main(const Napi::CallbackInfo &info) {
		Napi::Env env = info.Env();
    return Napi::String::New(env, "Hello World");
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "Main"), Napi::Function::New(env, Main));
    return exports;
}

NODE_API_MODULE(addon, Init);
