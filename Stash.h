//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_STASH_H
#define CRYPTOPROJECT_STASH_H

#include "Valuable.h"
class Stash {
public:
    Valuable* getCurrency();
private:
    Valuable* listOfCurrences;
};


#endif //CRYPTOPROJECT_STASH_H
