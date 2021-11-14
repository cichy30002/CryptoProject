#include <iostream>
#include <iomanip>
#include "NonCryptoCurrency.h"
#include "CryptoCurrency.h"
#include "NonCryptoWallet.h"
#include "CryptoWallet.h"
#include "Wallet.h"
#include "GameLoop.h"

void test()
{
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
    normalWallet->printAllCoins();

    CryptoCurrency *ethereum = new CryptoCurrency(12, 1.1, "Ethereum", "Distributed computing");
    CryptoCurrency *tether = new CryptoCurrency(30, 0.5, "Tether", "stablecoin");
    std::vector<Valuable*> secondWallet;
    secondWallet.push_back(bitcoin);
    secondWallet.push_back(ethereum);
    secondWallet.push_back(tether);


    CryptoWallet *magicWallet = new CryptoWallet(secondWallet, 123, 69420);
    magicWallet->printAllCoins();

    Wallet *fullWallet = new Wallet(normalWallet, magicWallet);
}
void mainLoop()
{
    GameLoop *gameLoop;
    Wallet *wallet;
    int errors = false;
    do{
        errors = false;
        std::vector<Valuable*> nonCryptoVec;
        std::vector<Valuable*> cryptoVec;
        wallet = new Wallet(new NonCryptoWallet(nonCryptoVec,"anon"), new CryptoWallet(cryptoVec, 21, 37));
        gameLoop = new GameLoop(*wallet, 0);

             try {
                 gameLoop->input();
             }
             catch (int x){
                errors = true;
                std::cout<<"Failed input process, restarting...\n";
                 std::cin.clear();
                 std::cin.ignore();
             }
     }while(errors);
    gameLoop->output();
    while(wallet->countCryptos()>0)
    {
        gameLoop->trade();
        gameLoop->output();
    }

}
int main() {

    //test();
    mainLoop();

    return 0;
}
