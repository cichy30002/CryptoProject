//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_NONCRYPTOWALLET_H
#define CRYPTOPROJECT_NONCRYPTOWALLET_H


#include <string>
#include "Stash.h"

class NonCryptoWallet : public Stash{
public:
    std::string showWealth();
private:
    std::string name;
};


#endif //CRYPTOPROJECT_NONCRYPTOWALLET_H
