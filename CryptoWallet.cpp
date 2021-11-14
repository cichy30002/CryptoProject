//
// Created by Cichy on 10.11.2021.
//

#include <iostream>
#include "CryptoWallet.h"

CryptoWallet::CryptoWallet(const std::vector<Valuable *> &listOfCurrencies, int publicKey, int privateKey) : Stash(listOfCurrencies), publicKey(publicKey), privateKey(privateKey) {}

void CryptoWallet::printAllCoins() {

    std::string result = "";
    result += "Cryptos in wallet with public key ";
    result += std::to_string(publicKey);
    result += ":\n";
    for(int i=0; i<Stash::getCurrency().size(); i++) {
        result += floatToString(Stash::getCurrency()[i]->getAmount());
        result += " ";
        result += Stash::getCurrency()[i]->getName();
        result += " worth ";
        result += floatToString(Stash::getCurrency()[i]->getExchangeRate() * Stash::getCurrency()[i]->getAmount());
        result += "\n";
    }
    std::cout<<result;
    return;
}

void CryptoWallet::setProbabilities(float pBuy, float pSell) {
    for (int i = 0; i < Stash::listOfCurrencies.size(); ++i) {
        Stash::listOfCurrencies[i]->setProbabilities(pBuy,pSell);
    }
}

void CryptoWallet::tradeAll() {
    for (int i = 0; i < Stash::listOfCurrencies.size(); ++i) {
        Stash::listOfCurrencies[i]->trade();
    }
}

float CryptoWallet::countCryptos() {
    float counter = 0;
    for (int i = 0; i < Stash::listOfCurrencies.size(); ++i) {
        counter += Stash::listOfCurrencies[i]->getAmount();
    }
    return counter;
}



