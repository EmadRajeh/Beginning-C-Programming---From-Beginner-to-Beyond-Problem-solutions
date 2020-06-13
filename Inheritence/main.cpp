//
//  main.cpp
//  Polymorphism
//
//  Created by Emad Rajeh on 01/02/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include <iostream>
#include <bits/stdc++.h>
#include "Account.h"
#include "Saving_Account.h"
#include "Account_Util.h"
#define line "\n"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
   
    cout.precision(2);
    cout << fixed;
    
    //Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    
    //Accounts
    vector<Saving_Account> sav_accounts;
    sav_accounts.push_back(Saving_Account{});
    sav_accounts.push_back(Saving_Account{"Superman"});
    sav_accounts.push_back(Saving_Account{"Batman", 2000});
    sav_accounts.push_back(Saving_Account{"Wonderwoman", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    return 0;
}
