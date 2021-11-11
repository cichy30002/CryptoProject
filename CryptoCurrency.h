//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_CRYPTOCURRENCY_H
#define CRYPTOPROJECT_CRYPTOCURRENCY_H


#include <string>
#include "Printable.h"
#include "NonCryptoCurrency.h"

class CryptoCurrency : public Printable{
public:
    float probabilityBuy;
    float probabilitySell;

    CryptoCurrency(float amount, float exchangeRate, const std::string &name, const std::string &type);

    void sell(float amount, NonCryptoCurrency *currency);
    void buy(float amount, NonCryptoCurrency *currency);
    void trade();
    void setProbabilities(float buy, float sell);

private:
    std::string type;
};


#endif //CRYPTOPROJECT_CRYPTOCURRENCY_H
