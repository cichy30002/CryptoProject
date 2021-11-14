//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_NONCRYPTOWALLET_H
#define CRYPTOPROJECT_NONCRYPTOWALLET_H


#include <string>
#include "Stash.h"

class NonCryptoWallet : public virtual Stash{
public:
    NonCryptoWallet(const std::vector<Valuable*> &listOfCurrencies, const std::string &owner);

    void printAllCoins();
private:
    std::string owner;
};


#endif //CRYPTOPROJECT_NONCRYPTOWALLET_H
