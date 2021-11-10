//
// Created by Cichy on 10.11.2021.
//

#ifndef CRYPTOPROJECT_CRYPTOCURRENCY_H
#define CRYPTOPROJECT_CRYPTOCURRENCY_H


class CryptoCurrency : public Printable{
public:
    float ProbabilityBuy;
    float ProbabilitySell;
    void sell();
    void buy();
    void trade();
private:
    string name;
    string type;
};


#endif //CRYPTOPROJECT_CRYPTOCURRENCY_H
