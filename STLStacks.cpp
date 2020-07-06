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

template <typename T>
void display(stack<T> s){
    cout << "[ ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "]\n";
}


int main(int argc, const char * argv[]) {
    // insert code here...
 
    stack<int> s;
    stack<int, vector<int>> st;
    stack<int, list<int>> sl;
    stack<int, deque<int>> sd;
    
    for(int i : {1,2,3,4,5}){
        s.push(i);
    }
    display(s);
    
    s.push(100);
    display(s);
    
    s.pop();
    s.pop();
    display(s);
    
    while (!s.empty()) {
        s.pop();
    }
    display(s);
    cout << s.size() << nline;
    
    s.push(10);
    display(s);
    s.top()  = 100;
    cout << s.top() << nline;
    
   
    
    
    return 0;
}
