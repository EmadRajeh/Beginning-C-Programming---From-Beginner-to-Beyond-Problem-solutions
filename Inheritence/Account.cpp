//
//  Account.cpp
//  Polymorphism
//
//  Created by Emad Rajeh on 11/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include "Account.h"
#include <iostream>

Account::Account(std::string name, double bal)
:name(name),balance(bal){
    
}
Account::~Account(){
    
}
bool Account::deposit(double amount){
    if(amount < 0){
        return false;
    }else{
        balance += amount;
        return true;
    }
}
bool Account::withdraw(double amount) {
    if(balance - amount <  0){
        return false;;
    }else{
        balance -= amount;
        return true;
    }
}
double Account::get_balance()const{
    return balance;
}
std::ostream &operator<<(std::ostream &os, const Account &acc){
    os << "Account: " << acc.name << " : " << acc.balance << "\n";
    return os;
}
