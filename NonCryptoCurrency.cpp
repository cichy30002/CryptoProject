//
// Created by Cichy on 10.11.2021.
//

#include "NonCryptoCurrency.h"

std::string NonCryptoCurrency::getName()  const{
    return name;
}

void NonCryptoCurrency::Add(int addAmount) {
    Valuable::setAmount(Valuable::getAmount() + addAmount);
}

void NonCryptoCurrency::Take(int takeAmount) {
    //error handling
    Valuable::setAmount(Valuable::getAmount() - takeAmount);
}

NonCryptoCurrency::NonCryptoCurrency(int amount, float exchangeRate, const std::string &name) : Valuable(amount, exchangeRate), name(name) {}
