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

class Person{
    friend ostream &operator<<(ostream &os, const Person &p);
    string name;
    int age;
public:
    Person():name{"Unknown"}, age(0){}
    Person(string name, int age)
    :name(name),age(age){
        
    }
    bool operator<(const Person &p)const{
        return (this->age < p.age);
    }
    bool operator==(const Person &p)const{
        return this->name == p.name && this->age == p.age;
    }
};
ostream &operator<<(ostream &os, const Person &p){
    os << p.name << ":" << p.age;
    return os;
}
template <typename T>
void display(priority_queue<T> pq){
    cout << "[ ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "]\n";
}

void test1(){
    priority_queue<int> pq;
    
    for(int i : {3,5,7,32,5,64,3,41,6,15,16,12}){
        pq.push(i);
    }

    
    cout << "Top: " << pq.top() << nline;
    cout << "Size: " << pq.size() << nline;

    display(pq);
    pq.pop();
    display(pq);
}

void test2(){
    priority_queue<Person> pq;
    pq.push(Person{"A", 10});
    pq.push(Person{"B", 1});
    pq.push(Person{"C", 14});
    pq.push(Person{"D", 18});
    pq.push(Person{"E", 7});
    pq.push(Person{"F", 27});
    
    display(pq);
}
int main(int argc, const char * argv[]) {
    // insert code here...
 

    test1();
    test2();
   
    
    
    
    return 0;
}
