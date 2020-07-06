//
//  main.cpp
//  Standard Template Library
//
//  Created by Emad Rajeh on 27/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

#define nline "\n"
using namespace std;

void display(map<string, set<int>> &m){
    cout << "[ ";
    for(auto i : m){
        cout << i.first << " : [ ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << "] ";
    }
    cout << "]\n";
}
template <typename T, typename V>
void display(const map<T, V> &m){
    cout << "[ ";
    for(auto it : m){
        cout << it.first << " : " << it.second << " ";
    }
    cout << "]\n";
}

void test1(){
    map<string, int> m{
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    display(m);
    
    m.insert(pair<string, int> {"Anna", 4});
    display(m);
    
    m.insert(make_pair("Joe", 5));
    display(m);
    
    m["Frank"] = 18;
    display(m);
    
    m.at("Frank") += 10;
    display(m);
    
    m.erase("Frank");
    
    cout << "Count for Joe: " << m.count("Joe") << nline;
    cout << "Count for Frank: " << m.count("Frank") << nline;
    
    auto it = m.find("Larry");
    if (it != m.end()) {
        cout << "Found: " << it->first << " : " << it->second << nline;
    }
    
    m.clear();
    display(m);
    
}
void test2(){
    map<string, set<int>> grades{
        {"Larry", {100, 90}},
        {"Moe", {94}},
        {"Curly", {80,90, 100}}
    };
    display(grades);
    
    grades["Larry"].insert(95);
    
    auto it = grades.find("Moe");
    if (it != grades.end()) {
        it->second.insert(1000);
    }
    display(grades);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    test1();
    test2();

   
    
    return 0;
}
