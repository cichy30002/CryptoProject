//
// Created by Cichy on 10.11.2021.
//

#include "NonCryptoCurrency.h"



void NonCryptoCurrency::Add(float addAmount) {
    Valuable::setAmount(Valuable::getAmount() + addAmount);
}

void NonCryptoCurrency::Take(float takeAmount) {
    //error handling
    Valuable::setAmount(Valuable::getAmount() - takeAmount);
}

NonCryptoCurrency::NonCryptoCurrency(float amount, float exchangeRate, const std::string &name) : Valuable(amount, exchangeRate, name){}
