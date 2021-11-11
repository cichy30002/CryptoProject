//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_CRYPTOWALLET_H
#define CRYPTOPROJECT_CRYPTOWALLET_H


#include <string>
#include "Stash.h"

class CryptoWallet : public Stash{
public:
    CryptoWallet(const std::vector<Valuable *> &listOfCurrencies, int publicKey, int privateKey);

    std::string listAllCoins();
    int publicKey;
private:
    int privateKey;
};


#endif //CRYPTOPROJECT_CRYPTOWALLET_H
