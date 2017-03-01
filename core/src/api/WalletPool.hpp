// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <string>

namespace ledger { namespace core { namespace api {

class BitcoinLikeExtendedPublicKeyProvider;
class BitcoinLikeNetworkParametersCallback;
class BitcoinLikeWalletCallback;
class Configuration;
class Logger;
class Preferences;
struct BitcoinLikeNetworkParameters;

class WalletPool {
public:
    virtual ~WalletPool() {}

    virtual void getOrCreateBitcoinLikeWallet(const std::shared_ptr<BitcoinLikeExtendedPublicKeyProvider> & publicKeyProvider, const BitcoinLikeNetworkParameters & networkParams, const std::shared_ptr<Configuration> & configuration, const std::shared_ptr<BitcoinLikeWalletCallback> & callback) = 0;

    virtual void getBitcoinLikeWallet(const std::string & identifier, const std::shared_ptr<BitcoinLikeWalletCallback> & callback) = 0;

    virtual void getSupportedBitcoinLikeNetworkParameters(const std::shared_ptr<BitcoinLikeNetworkParametersCallback> & callback) = 0;

    virtual void addBitcoinLikeNetworkParameters(const BitcoinLikeNetworkParameters & params) = 0;

    virtual void removeBitcoinLikenetworkParameters(const BitcoinLikeNetworkParameters & params) = 0;

    virtual std::shared_ptr<Logger> getLogger() = 0;

    virtual std::shared_ptr<Preferences> getPreferences() = 0;

    virtual std::shared_ptr<Preferences> getWalletPreferences(const std::string & walletIdentifier) = 0;

    virtual std::shared_ptr<Preferences> getAccountPreferences(const std::string & walletIdentifier, int32_t accountNumber) = 0;

    virtual std::shared_ptr<Preferences> getOperationPreferences(const std::string & uid) = 0;
};

} } }  // namespace ledger::core::api
