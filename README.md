# CryptoProject
Project for Object-oriented Proggraming at university. 

We were supposed to implement a cryptocurrency wallet that records the coins you currently have, and a small simulation that sells and buys cryptos with user given probability.
  
Before writing the project we had developed an UML class diagram to visualize the structure:
![image](https://user-images.githubusercontent.com/43621858/141275826-097487fe-a65d-40f2-bfc8-f1f5f17785bd.png)

The program runs in console. Firstly it ask for input - number of randomly genrated cryptocurrencies, pBuy and pSell. pBuy and pSell are probabilities that given cryptocurrency will be bought or sold in current iteration. To keep program convergent and logic pSell > pBuy and pBuy + pSell = 1

Then the program starts main loop which sells or buys cryptocurrencies until we are left only with non-crypto currences. It also outputs acctual state of crypto and non-crypto wallets after each iteration.
