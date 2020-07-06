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
void display(queue<T> q){
    cout << "[ ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q .pop();
    }
    cout << "]\n";
}


int main(int argc, const char * argv[]) {
    // insert code here...
 
    queue<int> q;
    queue<int, list<int>> ql;
    queue<int, deque<int>> qd;
    
    for(int i : {1,2,3,4,5}){
        q.push(i);
    }
    display<int>(q);
    
    cout << "Front: " << q.front() << nline;
    cout << "Back: " << q.back() << nline;
    
    q.push(100);
    display(q);
    
    q.pop();
    q.pop();
    
    display(q);
    
    while (!q.empty()) {
        q.pop();
    }
    display(q);
    
    cout << "Size: " << q.size() << nline;
    
    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);
   
    cout << "Front: " << q.front() << nline;
    cout << "Back: " << q.back() << nline;
    
    q.front() = 5000;
    q.back() = 100000;
    cout << "Front: " << q.front() << nline;
    cout << "Back: " << q.back() << nline;
    display(q);
    
    
    return 0;
}
