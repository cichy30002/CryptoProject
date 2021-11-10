//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_GAMELOOP_H
#define CRYPTOPROJECT_GAMELOOP_H


#include "Wallet.h"

class GameLoop {
public:
    Wallet wallet;
    void Input();
    void Trade();
    void Output();
private:
    int numberOfCryptos;
};


#endif //CRYPTOPROJECT_GAMELOOP_H
