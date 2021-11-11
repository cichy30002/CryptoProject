//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_CRYPTOCURRENCY_H
#define CRYPTOPROJECT_CRYPTOCURRENCY_H


#include <string>
#include "Printable.h"

class CryptoCurrency : public Printable{
public:
    float ProbabilityBuy;
    float ProbabilitySell;
    void sell();
    void buy();
    void trade();
private:
    std::string name;
    std::string type;
};


#endif //CRYPTOPROJECT_CRYPTOCURRENCY_H
