//
//  Saving_Account.cpp
//  Polymorphism
//
//  Created by Emad Rajeh on 11/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//


#include "Saving_Account.h"
#include <iostream>
 

Saving_Account::Saving_Account(std::string name, double bal, double int_rate)
:Account(name, bal), int_rate(int_rate){
    
}
Saving_Account::~Saving_Account(){
    
}
bool Saving_Account::deposit(double amount){
        amount = amount + (amount * int_rate/100);
        return  Account::deposit(amount);
}
std::ostream &operator<<(std::ostream &os, const Saving_Account &sav_acc){
    os << "Saving Account: "<< sav_acc.name << " : " << sav_acc.balance << ", " << sav_acc.int_rate << "% \n";
    return os;
}
