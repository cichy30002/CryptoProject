//
// Created by Cichy on 10.11.2021.
//

#include <iostream>
#include <random>
#include <time.h>
#include "GameLoop.h"

#define MAX_AMOUNT 30
#define MAX_EXCHANGE_RATE 500.0
#define MIN_EXCHANGE_RATE 0.1
#define MAX_NAME_LENGTH 15
#define MIN_NAME_LENGTH 3

NonCryptoCurrency* GameLoop::mainNonCrypto = new NonCryptoCurrency(100, 1.0, "Euro");

GameLoop::GameLoop(const Wallet &wallet, int numberOfCryptos) : wallet(wallet), numberOfCryptos(numberOfCryptos) {
    srand(time(NULL));

}

void GameLoop::input() {

    std::cout<<"Welcome \n";
    std::cout<<"Please enter number of cryptocurrencies you want to have in simulation: \n";
    //error handling
    std::cin>>numberOfCryptos;

    for (int i = 0; i < numberOfCryptos; ++i) {
        generateNewCrypto();
    }
    std::cout<<"Please enter pBuy and pSell cryptos (in range (0,1), pBuy > pSell and it must sum to 1)\n";
    //error handling
    float pBuy,pSell = 0;
    std::cin>>pBuy>>pSell;
    wallet.setProbabilities(pBuy,pSell);
    wallet += mainNonCrypto;
}

void GameLoop::trade() {
    wallet.tradeAll();
}

void GameLoop::output() {

}

void GameLoop::generateNewCrypto() {
    std::string name = generateRandomName();
    std::string type = generateRandomName();
    float amount = rand()%MAX_AMOUNT+1;
    float exchangeRate = MIN_EXCHANGE_RATE + (float) (rand()) / (RAND_MAX/(MAX_EXCHANGE_RATE-MIN_EXCHANGE_RATE));
    if(amount>0 && exchangeRate > 0)
    {
        CryptoCurrency *cryptoCurrency = new CryptoCurrency(amount,exchangeRate,name,type);
        wallet += cryptoCurrency;
    }
}

std::string GameLoop::generateRandomName() {
    int length = MIN_NAME_LENGTH + rand()%(MAX_NAME_LENGTH - MIN_NAME_LENGTH);
    std:: string result = "";
    for (int i = 0; i < length; ++i) {
        char tmp = 'a' + rand()%26;
        result += tmp;
    }
    //result[0] = result[0] + ('A'-'a');
    return result;
}




