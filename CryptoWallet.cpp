//
// Created by Cichy on 10.11.2021.
//

#include "CryptoWallet.h"

CryptoWallet::CryptoWallet(const std::vector<Valuable *> &listOfCurrencies, int publicKey, int privateKey) : Stash(listOfCurrencies), publicKey(publicKey), privateKey(privateKey) {}

std::string CryptoWallet::listAllCoins() {
    std::string result = "";
    result += "Cryptos in wallet with public key ";
    result += publicKey;
    result += ":\n";
    for(int i=0; i<Stash::getCurrency().size(); i++) {
        result += std::to_string(Stash::getCurrency()[i]->getAmount());
        result += " ";
        result += Stash::getCurrency()[i]->getName();
        result += " worth ";
        result += std::to_string(Stash::getCurrency()[i]->getExchangeRate() * Stash::getCurrency()[i]->getAmount());
        result += "\n";
    }
    return result;
}


