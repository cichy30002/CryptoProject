//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTO_VALUEABLE_H
#define CRYPTO_VALUEABLE_H


class Valuable {
public:
    int getAmount();
    void setAmount(int newAmount);
    float getExchangeRate();
    void setExchangeRate(float newExchangeRate);
    Valuable(int amount, float exchangeRate);
private:
    int amount;
    float exchangeRate;
};


#endif //CRYPTO_VALUEABLE_H
