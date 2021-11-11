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

    std::vector<Valuable*> getCurrency();
private:
    std::vector<Valuable*> listOfCurrencies;
};


#endif //CRYPTOPROJECT_STASH_H
