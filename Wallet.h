//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_WALLET_H
#define CRYPTOPROJECT_WALLET_H


#include "CryptoWallet.h"
#include "NonCryptoWallet.h"
#include "CryptoCurrency.h"

class Wallet {
public:

    Wallet(NonCryptoWallet *nonCryptoWallet, CryptoWallet *cryptoWallet);

    Wallet& operator += (CryptoCurrency* crypto);
    Wallet& operator += (NonCryptoCurrency* nonCrypto);
    void printAllCoinsBoth();
    void setProbabilities(float pBuy,float pSell);

private:
    NonCryptoWallet *nonCryptoWallet;
    CryptoWallet *cryptoWallet;
};


#endif //CRYPTOPROJECT_WALLET_H
