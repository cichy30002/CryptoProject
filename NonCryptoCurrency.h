//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTO_NONCRYPTOCURRENCY_H
#define CRYPTO_NONCRYPTOCURRENCY_H


#include <string>
#include "Valuable.h"

class NonCryptoCurrency : public Valuable{
public:
    std::string getName() const;
    void Add(int addAmount);
    void Take(int takeAmount);

    NonCryptoCurrency(int amount, float exchangeRate, const std::string &name);

private:
     std::string name;
};


#endif //CRYPTO_NONCRYPTOCURRENCY_H
