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
        return this->age > p.age;
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
void display(const list<T> &l){
    cout << "[ ";
    for(auto i : l){
        cout << i << " ";
    }
    cout << "]\n";
}
void test1(){
    list<int> l{1,2,3,4,5};
    display(l);
    
    list<string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    
    list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    list<int> l4(10,100);
    display(l4);
    
}
void test2(){
    list<int> l{1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    cout << "Size: " << l.size() << nline;
    cout << "Front: " << l.front() << nline;
    cout << "Back: " << l.back() << nline;
    
    l.clear();
    display(l);
    cout << "Size: " << l.size() << nline;
}
void test3(){
    list<int> l{1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    l.resize(5);
    display(l);
    
    l.resize(10);
    display(l);
    
    list<Person> persons;
    persons.resize(5);//will default it to the default initilizier
    display(persons);
    
}

void test4(){
    list<int> l{1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    auto it = find(l.begin(), l.end(), 5);
    if (it != l.end()) {
        l.insert(it, 100);
    }
    display(l);
    
    list<int> l2 {1000,2000,3000};
    if (it != l.end()) {
        l.insert(it, l2.begin(),l2.end());
    }
    display(l);
    
    advance(it, -4);
    
    l.erase(it);
    display(l);
    
}
void test5(){
    list<Person> stooges{
        {"Terry", 43},
        {"Justin", 2},
        {"Andreas",53}
    };
    display(stooges);
    
    string name;
    int age;
    cout << "Enter the name of the next stooge: ";
    getline(cin, name);
    cout << "Enter the age of the next stooge: ";
    cin >> age;
    stooges.emplace_back(name, age);
    display(stooges);
    
    auto it = find(stooges.begin(), stooges.end(), Person{"Justin", 2});
    if (it != stooges.end()) {
        stooges.insert(it, Person{"Jyrki", 5});
    }
    display(stooges);
}
void test6(){
    list<Person> stooges{
        {"Terry", 1},
        {"Justin", 2},
        {"Andreas",3}
    };
    display(stooges);
    stooges.sort();
    display(stooges);
}
int main(int argc, const char * argv[]) {
    // insert code here...

   
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    
     
    

    
    


    return 0;
}
