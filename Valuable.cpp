//
// Created by Cichy on 10.11.2021.
//

#include "Valuable.h"

Valuable::Valuable(int amount, float exchangeRate) {
    setAmount(amount);
    setExchangeRate(exchangeRate);
}

void Valuable::setExchangeRate(float newExchangeRate) {
    //error handling
    exchangeRate = newExchangeRate;
}

float Valuable::getExchangeRate() {
    return exchangeRate;
}

void Valuable::setAmount(int newAmount) {
    //error handling
    amount = newAmount;
}

int Valuable::getAmount() {
    return amount;
}
