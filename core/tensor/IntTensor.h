#pragma once

#include <napi.h>
#include <torch/torch.h>

class IntTensor : public Napi::ObjectWrap<IntTensor> {
    public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);
        IntTensor(const Napi::CallbackInfo &);

    private:
        static Napi::FunctionReference constructor;

        Napi::Value data(const Napi::CallbackInfo &);
};