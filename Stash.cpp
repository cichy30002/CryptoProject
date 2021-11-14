//
// Created by Cichy on 10.11.2021.
//

#include <iomanip>
#include <sstream>
#include "Stash.h"

std::vector<Valuable*> Stash::getCurrency() {
    return listOfCurrencies;
}

Stash::Stash(const std::vector<Valuable*> &listOfCurrencies) : listOfCurrencies(listOfCurrencies) {}

void Stash::addCurrency(Valuable* currency) {
    listOfCurrencies.push_back(currency);
}

void Stash::printAllCoins() {

}

std::string Stash::floatToString(float x) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << x;
    return ss.str();
}
