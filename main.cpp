#include <iostream>
#include "NonCryptoCurrency.h"
#include "CryptoCurrency.h"
int main() {
    NonCryptoCurrency *euro = new NonCryptoCurrency(10, 1.0, "Euro");
    std::cout<<euro->getName()<<": "<<euro->getAmount()<<"\n";
    euro->Add(12);
    euro->setExchangeRate(1.2);
    std::cout<<euro->getName()<<": "<<euro->getAmount()<<"  worth: "<<euro->getAmount()*euro->getExchangeRate()<<"\n";

    CryptoCurrency *bitcoin = new CryptoCurrency(3,2.0,"Bitcoin","P2P");
    bitcoin->toString();
    bitcoin->buy(2,euro);
    bitcoin->toString();
    std::cout<<euro->getName()<<": "<<euro->getAmount()<<"  worth: "<<euro->getAmount()*euro->getExchangeRate()<<"\n";
    bitcoin->sell(4,euro);
    bitcoin->toString();
    std::cout<<euro->getName()<<": "<<euro->getAmount()<<"  worth: "<<euro->getAmount()*euro->getExchangeRate()<<"\n";

    return 0;
}
