//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_GAMELOOP_H
#define CRYPTOPROJECT_GAMELOOP_H


#include "Wallet.h"

class GameLoop {
public:
    static NonCryptoCurrency* mainNonCrypto;
    Wallet wallet;
    GameLoop(const Wallet &wallet, int numberOfCryptos);

    void input();
    void trade();
    void output();
private:
    int numberOfCryptos;

    void generateNewCrypto();
    std::string generateRandomName();
};


#endif //CRYPTOPROJECT_GAMELOOP_H
