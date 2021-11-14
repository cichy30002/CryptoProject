//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_STASH_H
#define CRYPTOPROJECT_STASH_H

#include <vector>
#include "Valuable.h"
class Stash {
public:
    Stash(const std::vector<Valuable*> &listOfCurrencies);
    void addCurrency(Valuable* currency);
    std::vector<Valuable*> getCurrency();
    virtual void printAllCoins();
protected:
    std::vector<Valuable*> listOfCurrencies;
};


#endif //CRYPTOPROJECT_STASH_H
