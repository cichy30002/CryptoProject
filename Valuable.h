//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTO_VALUEABLE_H
#define CRYPTO_VALUEABLE_H


#include <string>

class Valuable {
public:
    std::string getName() const;
    float getAmount();
    void setAmount(float newAmount);
    float getExchangeRate();
    void setExchangeRate(float newExchangeRate);
    Valuable(float amount, float exchangeRate, const std::string &name);
    virtual void setProbabilities(float buy, float sell);
private:
    std::string name;
    float amount;
    float exchangeRate;
};


#endif //CRYPTO_VALUEABLE_H
