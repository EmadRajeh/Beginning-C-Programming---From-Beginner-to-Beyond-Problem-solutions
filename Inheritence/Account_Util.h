//
//  Account_Util.hpp
//  Polymorphism
//
//  Created by Emad Rajeh on 12/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#ifndef Account_Util_h
#define Account_Util_h

#include <stdio.h>
#include <vector>
#include "Account.h"
#include "Saving_Account.h"

//For Account Class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

//For Saving Account Class
void display(const std::vector<Saving_Account> &accounts);
void deposit(std::vector<Saving_Account> &accounts, double amount);
void withdraw(std::vector<Saving_Account> &accounts, double amount);


#endif /* Account_Util_hpp */
