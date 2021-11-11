#include <iostream>
#include "NonCryptoCurrency.h"

int main() {
    NonCryptoCurrency *euro = new NonCryptoCurrency(10, 1.0, "Euro");
    std::cout<<euro->getName()<<": "<<euro->getAmount()<<"\n";
    euro->Add(12);
    euro->setExchangeRate(1.2);
    std::cout<<euro->getName()<<": "<<euro->getAmount()<<"  worth: "<<euro->getAmount()*euro->getExchangeRate()<<"\n";
    return 0;
}
