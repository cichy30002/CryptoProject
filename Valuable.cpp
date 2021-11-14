//
// Created by Cichy on 10.11.2021.
//

#include "Valuable.h"

std::string Valuable::getName()  const{
    return name;
}
Valuable::Valuable(float amount, float exchangeRate, const std::string &name) : name(name){
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

void Valuable::setAmount(float newAmount) {
    //error handling
    amount = newAmount;
}

float Valuable::getAmount() {
    return amount;
}

void Valuable::setProbabilities(float buy, float sell) {

}
