#include <iostream>
#include <cstdint>
#include "main.hpp"
#include "Bank.hpp"

void main(){
    uint16_t authChoice = NULL;
    bool isRunning = true;

    bank::initializeBank();
    
    while(authChoice!=3){
        std::cout << "Main menu\n\n";
        std::cout << "1. Register\n";
        std::cout << "2. Login\n";
        std::cout << "3. Exit\n";
        std::cout << bank::getBankName() << std::endl;        
        std::cin >> authChoice;

        switch (authChoice){
            case 1:

                break;
            case 2:

                break;
            case 3:
                isRunning = false;
                break;
            default:
                std::cout << "Invalid input. Try again\n";
                break;
        }
    }
}