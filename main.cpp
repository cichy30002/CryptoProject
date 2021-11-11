#include <iostream>
#include "NonCryptoCurrency.h"
#include "CryptoCurrency.h"
#include "NonCryptoWallet.h"

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

    NonCryptoCurrency *zloty = new NonCryptoCurrency(10, 0.2, "PLN");
    std::vector<Valuable*> firstWallet;
    firstWallet.push_back(euro);
    firstWallet.push_back(zloty);

    NonCryptoWallet *normalWallet = new NonCryptoWallet(firstWallet, "Kuba");
    std::cout<<normalWallet->showWealth();
    return 0;
}
