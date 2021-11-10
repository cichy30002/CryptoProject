//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTO_VALUEABLE_H
#define CRYPTO_VALUEABLE_H


class Valueable {
public:
    int getAmount();
    void setAmount(int amount);
    float getExchangeRate();
    void setExchangeRate(float exchangeRate);
private:
    int amount;
    float exchangeRate;
};


#endif //CRYPTO_VALUEABLE_H
