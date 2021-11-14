//
// Created by Cichy on 10.11.2021.
//

#include <iostream>
#include <random>
#include "CryptoCurrency.h"
#include "GameLoop.h"

CryptoCurrency::CryptoCurrency(float amount, float exchangeRate, const std::string &name, const std::string &type) : Printable(
        amount, exchangeRate, name), type(type) {}

void CryptoCurrency::sell(float amount, NonCryptoCurrency *currency) {
    if(Valuable::getAmount() - amount >= 0)
    {
        Valuable::setAmount(Valuable::getAmount() - amount);
        currency->Add(amount*Valuable::getExchangeRate()/currency->getExchangeRate());
    }
}

void CryptoCurrency::buy(float amount, NonCryptoCurrency *currency) {
    if(currency->getAmount()*currency->getExchangeRate() >= amount*Valuable::getExchangeRate()/currency->getExchangeRate()) {
        Valuable::setAmount(Valuable::getAmount() + amount);
        currency->Take(amount * Valuable::getExchangeRate() / currency->getExchangeRate());
    }
}

void CryptoCurrency::trade() {

    if((float)rand()/(float)RAND_MAX < probabilityBuy)
    {
        buy(1,GameLoop::mainNonCrypto);
    }
    else
    {
        sell(1,GameLoop::mainNonCrypto);
    }
}

void CryptoCurrency::setProbabilities(float buy, float sell) {
    probabilityBuy = buy;
    probabilitySell = sell;
}


