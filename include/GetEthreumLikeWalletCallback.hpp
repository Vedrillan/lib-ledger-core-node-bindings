// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_GETETHREUMLIKEWALLETCALLBACK_HPP
#define DJINNI_GENERATED_GETETHREUMLIKEWALLETCALLBACK_HPP

#include <memory>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class EthereumLikeWallet;
struct Error;

class GetEthreumLikeWalletCallback {
public:
    virtual ~GetEthreumLikeWalletCallback() {}

    virtual void onSuccess(const std::shared_ptr<EthereumLikeWallet> & wallet, bool isCreated) = 0;

    virtual void onError(const Error & error) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_GETETHREUMLIKEWALLETCALLBACK_HPP
