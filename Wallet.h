//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_WALLET_H
#define CRYPTOPROJECT_WALLET_H


#include "CryptoWallet.h"
#include "NonCryptoWallet.h"

class Wallet {
private:
    NonCryptoWallet nonCryptoWallet;
    CryptoWallet cryptoWallet;
};


#endif //CRYPTOPROJECT_WALLET_H
