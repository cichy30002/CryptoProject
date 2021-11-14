//
// Created by Cichy on 10.11.2021.
//

#include "Wallet.h"

Wallet::Wallet(NonCryptoWallet *nonCryptoWallet, CryptoWallet *cryptoWallet) : nonCryptoWallet(nonCryptoWallet),
                                                                               cryptoWallet(cryptoWallet) {}

Wallet& Wallet::operator+=(CryptoCurrency* crypto) {
    cryptoWallet->addCurrency(crypto);
    return *this;
}

Wallet &Wallet::operator+=(NonCryptoCurrency *nonCrypto) {
    nonCryptoWallet->addCurrency(nonCrypto);
    return *this;
}

void Wallet::printAllCoinsBoth() {
    cryptoWallet->printAllCoins();
    nonCryptoWallet->printAllCoins();
}

void Wallet::setProbabilities(float pBuy, float pSell) {
    cryptoWallet->setProbabilities(pBuy,pSell);
}

void Wallet::tradeAll() {
    cryptoWallet->tradeAll();
}

float Wallet::countCryptos() {
    return cryptoWallet->countCryptos();
}


