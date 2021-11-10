//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTO_NONCRYPTOCURRENCY_H
#define CRYPTO_NONCRYPTOCURRENCY_H


class NonCryptoCurrency : public Valueable{
public:
    string getName();
    void Add(int amount);
    void Take(int amout);
private:
    string name;
};


#endif //CRYPTO_NONCRYPTOCURRENCY_H
