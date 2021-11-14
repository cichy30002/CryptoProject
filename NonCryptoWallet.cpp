//
// Created by Cichy on 10.11.2021.
//

#include "NonCryptoWallet.h"
#include <string>
#include <iostream>

void NonCryptoWallet::printAllCoins() {
    std::string result = "";
    result += "Mr. ";
    result += owner;
    result += " has:\n";
    for(int i=0; i<Stash::getCurrency().size(); i++)
    {
        result += floatToString(Stash::getCurrency()[i]->getAmount());
        result += " ";
        result += Stash::getCurrency()[i]->getName();
        result += " worth ";
        result += floatToString(Stash::getCurrency()[i]->getExchangeRate() * Stash::getCurrency()[i]->getAmount());
        result += "\n";
    }
    std::cout<<result;
}

NonCryptoWallet::NonCryptoWallet(const std::vector<Valuable*> &listOfCurrencies, const std::string &owner) : Stash(listOfCurrencies), owner(owner) {}
