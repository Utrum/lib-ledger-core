// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#include "BitcoinLikeWalletCallback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol LGBitcoinLikeWalletCallback;

namespace djinni_generated {

class BitcoinLikeWalletCallback
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeWalletCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeWalletCallback>;
    using ObjcType = id<LGBitcoinLikeWalletCallback>;

    using Boxed = BitcoinLikeWalletCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

