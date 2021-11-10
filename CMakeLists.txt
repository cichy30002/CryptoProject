cmake_minimum_required(VERSION 3.19)
project(CryptoProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(CryptoProject main.cpp CryptoCurrency.cpp CryptoCurrency.h NonCryptoCurrency.cpp NonCryptoCurrency.h Stash.cpp Stash.h Printable.cpp Printable.h Valuable.cpp Valuable.h NonCryptoWallet.cpp NonCryptoWallet.h CryptoWallet.cpp CryptoWallet.h Wallet.cpp Wallet.h GameLoop.cpp GameLoop.h)