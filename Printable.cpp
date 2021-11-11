//
// Created by Cichy on 10.11.2021.
//

#include <string>
#include <iostream>
#include "Printable.h"

void Printable::toString() {
    std::string result = "";
    result += "You currently have ";
    result += std::to_string( Valuable::getAmount());
    result += " ";
    result += Valuable::getName();
    result += " which is currently worth ";
    result += std::to_string(Valuable::getExchangeRate()*Valuable::getAmount());
    result += "\n";
    std::cout<<result;
}

Printable::Printable(float amount, float exchangeRate, const std::string &name) : Valuable(amount, exchangeRate, name) {}
