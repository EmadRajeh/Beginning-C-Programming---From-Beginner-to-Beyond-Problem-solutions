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
void print(const set<T> &s){
    cout << "[ ";
    for(auto i : s){
        cout << i << " ";
    }
    cout << "]\n";
}
void test1(){
    set<int> s {1, 4, 3,2,5};
    print(s);
    
    s = {1,2,3,1,1,1,3,3,4,5};
    print(s);
    s.insert(0);
    s.insert(10);
    print(s);
    
    if (s.count(10)) {
        cout << "10 is in the set\n";
    }else{
        cout << "10 is not in the set\n";
    }
    
    auto it = s.find(20);
    if(it != s.end()){
        cout << "Found: " << *it << nline;
    }
    
    s.clear();
    print(s);
}

void test2(){
    set<Person> stooges{
        {"Terry", 1},
        {"Justin", 2},
        {"Andreas", 3}
    };
    print(stooges);
    
    stooges.emplace("James", 5);
    print(stooges);
    
    stooges.emplace("Jyrki", 5);
    print(stooges);
    
    auto it = stooges.find(Person{"Justin", 2});
    if (it != stooges.end()) {
        stooges.erase(it);
    }
    print(stooges);
    
    it = stooges.find(Person{"XXXX", 5});
    if (it != stooges.end()) {
        stooges.erase(it);
    }
    print(stooges);
}

void test3(){
    set<string> s {"A", "B", "C"};
    print(s);
    
    auto result = s.insert("D");
    print(s);
    
    cout << boolalpha;
    cout << "First: " << *(result).first << nline;
    cout << "Second: " << result.second << nline;
    
    result = s.insert("A");
    print(s);
    
    cout<< boolalpha;
    cout << "First: " << *(result).first << nline;
    cout << "Second: " << result.second << nline;
}
int main(int argc, const char * argv[]) {
    // insert code here...

    test1();
    test2();
    test3();
    


    return 0;
}
