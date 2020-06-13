//
//  Saving_Account.hpp
//  Polymorphism
//
//  Created by Emad Rajeh on 11/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#ifndef Saving_Account_h
#define Saving_Account_h
#include "Account.h"


class Saving_Account: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &sav_acc);
private:
    static constexpr const char *def_name = "Unnamed Saving Account";//c-style string
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    
    Saving_Account(std::string name=def_name, double bal=def_balance, double int_rate=def_int_rate);
    bool deposit(double amount);
    //void withdraw(double amount); //will be inherited

    ~Saving_Account();
};
#endif /* Saving_Account_hpp */

