//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTO_PRINTABLE_H
#define CRYPTO_PRINTABLE_H


#include "Valuable.h"

class Printable: public Valuable{
public:
    Printable(float amount, float exchangeRate, const std::string &name);

    void toString();
};


#endif //CRYPTO_PRINTABLE_H
