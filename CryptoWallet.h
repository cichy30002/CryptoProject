//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_CRYPTOWALLET_H
#define CRYPTOPROJECT_CRYPTOWALLET_H


#include <string>
#include "Stash.h"
#include "CryptoCurrency.h"

class CryptoWallet : public virtual Stash{
public:
    CryptoWallet(const std::vector<Valuable *> &listOfCurrencies, int publicKey, int privateKey);

    void printAllCoins() override;
    int publicKey;
    void setProbabilities(float pBuy,float pSell);
private:
    int privateKey;
};


#endif //CRYPTOPROJECT_CRYPTOWALLET_H
