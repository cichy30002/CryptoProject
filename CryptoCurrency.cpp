//
// Created by Cichy on 10.11.2021.
//

#include <iostream>
#include "CryptoCurrency.h"

CryptoCurrency::CryptoCurrency(float amount, float exchangeRate, const std::string &name, const std::string &type) : Printable(
        amount, exchangeRate, name), type(type) {}

void CryptoCurrency::sell(float amount, NonCryptoCurrency *currency) {
    //catch errors
    Valuable::setAmount(Valuable::getAmount() - amount);
    currency->Add(amount*Valuable::getExchangeRate()/currency->getExchangeRate());
}

void CryptoCurrency::buy(float amount, NonCryptoCurrency *currency) {
    //catch errors
    Valuable::setAmount(Valuable::getAmount() + amount);
    currency->Take(amount*Valuable::getExchangeRate()/currency->getExchangeRate());
}

void CryptoCurrency::trade() {
    std::cout<<"trading (work in progress)\n";
}

void CryptoCurrency::setProbabilities(float buy, float sell) {
    probabilityBuy = buy;
    probabilitySell = sell;
}


