#pragma once
#include <string>

namespace bank{
    void initializeBank();
    
    bool loginUser(const std::string userName, const std::string userPassword);

    bool registerUser(const std::string userName, const std::string userPassword);

    std::string getBankName();
}