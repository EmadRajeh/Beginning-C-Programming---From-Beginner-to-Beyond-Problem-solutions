//
//  Account.hpp
//  Polymorphism
//
//  Created by Emad Rajeh on 11/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#ifndef Account_h
#define Account_h

#include <stdio.h>
#include <string>
class Account{
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);
private:
    static constexpr const char *def_name = "Unnamed Account";//c-style string
    static constexpr const double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double bal = def_balance);
    Account(double bal);
    ~Account();
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance()const;
    

};



#endif /* Account_hpp */
