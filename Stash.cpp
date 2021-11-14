//
// Created by Cichy on 10.11.2021.
//

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
