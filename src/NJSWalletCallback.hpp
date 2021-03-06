// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSWALLETCALLBACK_HPP
#define DJINNI_GENERATED_NJSWALLETCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/Error.hpp"
#include "../include/Wallet.hpp"
#include "NJSWalletCpp.hpp"
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/WalletCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWalletCallback: public ledger::core::api::WalletCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::WalletCallback> &object);
    static Nan::Persistent<ObjectTemplate> WalletCallback_prototype;
    ~NJSWalletCallback()
    {
        pers_resolver.Reset();
    };
    NJSWalletCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::shared_ptr<Wallet> & result, const std::experimental::optional<Error> & error);

private:
    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSWALLETCALLBACK_HPP
