//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTO_NONCRYPTOCURRENCY_H
#define CRYPTO_NONCRYPTOCURRENCY_H


#include <string>
#include "Valuable.h"

class NonCryptoCurrency : public Valuable{
public:

    void Add(float addAmount);
    void Take(float takeAmount);

    NonCryptoCurrency(float amount, float exchangeRate, const std::string &name);

};


#endif //CRYPTO_NONCRYPTOCURRENCY_H
