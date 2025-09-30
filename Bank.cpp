#include <string>
#include <vector>
#include "Bank.hpp"

namespace bank{
    struct Account{
        uint32_t id;
        std::string name;
        std::string password;
        uint64_t balance;
    };
    
    static std::string bankName = "Default bank name";
    static std::vector<Account> users;


    void initializeBank(){
        if(0) exit(1);
    }

    bool loginUser(const std::string userName, const std::string userPassword){
        return false;
    }

    bool registerUser(const std::string userName, const std::string userPassword){
        return false;
    }

    std::string getBankName(){
        return bankName;
    }
}