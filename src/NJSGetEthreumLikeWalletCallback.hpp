// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSGETETHREUMLIKEWALLETCALLBACK_HPP
#define DJINNI_GENERATED_NJSGETETHREUMLIKEWALLETCALLBACK_HPP


#include "../include/Error.hpp"
#include "../include/EthereumLikeWallet.hpp"
#include "NJSEthereumLikeWalletCpp.hpp"
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/GetEthreumLikeWalletCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSGetEthreumLikeWalletCallback: public ledger::core::api::GetEthreumLikeWalletCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::GetEthreumLikeWalletCallback> &object);
    static Nan::Persistent<ObjectTemplate> GetEthreumLikeWalletCallback_prototype;
    ~NJSGetEthreumLikeWalletCallback()
    {
        njs_impl.Reset();
    };
    NJSGetEthreumLikeWalletCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onSuccess(const std::shared_ptr<EthereumLikeWallet> & wallet, bool isCreated);

    void onError(const Error & error);

private:
    static NAN_METHOD(onSuccess);

    static NAN_METHOD(onError);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSGETETHREUMLIKEWALLETCALLBACK_HPP
