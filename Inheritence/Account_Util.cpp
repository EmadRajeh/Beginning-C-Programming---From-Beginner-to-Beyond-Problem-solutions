//
//  Account_Util.cpp
//  Polymorphism
//
//  Created by Emad Rajeh on 12/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include "Account_Util.h"
#include "Account.h"
#include <iostream>

void display(const std::vector<Account> &accounts){
    std::cout << "----Account----" << "\n";
    for(const auto &acc : accounts){
        std::cout << acc << "\n";
    }
}
void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "----Deposit Into Account----" << "\n";
    for(auto &acc : accounts){
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        }else{
            std::cout << "Failed Deposit of " << amount << " to " << acc << "\n";
        }
    }
}
void withdraw(std::vector<Account> &accounts, double amount){
    std::cout << "----Withdraw From Account----" << "\n";
    for(auto &acc : accounts){
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew  " << amount << " from " << acc << "\n";
        }else{
            std::cout << "Failed withdraw " << amount << " from " << acc << "\n";
        }
    }
}



void display(const std::vector<Saving_Account> &accounts){
    std::cout << "----Saving Account----" << "\n";
    for(const auto &acc : accounts){
        std::cout << acc << "\n";
    }
}
void deposit(std::vector<Saving_Account> &accounts, double amount){
    std::cout << "----Deposit Into Saving Account----" << "\n";
    for(auto &acc : accounts){
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << "\n";
        }else{
            std::cout << "Failed Deposit of " << amount << " to " << acc << "\n";
        }
    }
}
void withdraw(std::vector<Saving_Account> &accounts, double amount){
    std::cout << "----Withdraw From Saving Account----" << "\n";
    for(auto &acc : accounts){
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew  " << amount << " from " << acc << "\n";
        }else{
            std::cout << "Failed withdraw " << amount << " from " << acc << "\n";
        }
    }
}
