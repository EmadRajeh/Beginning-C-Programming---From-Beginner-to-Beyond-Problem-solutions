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

//function to display the std::array
void display(const array<int,5> &arr){
    cout << "[ ";
    for(auto i : arr){
        cout << i << " ";
    }
    cout << "]\n";
};

void test1(){
    array<int, 5> arr {1,2,3,4,5};
    array<int, 5> arr2;
    
    display(arr);
    display(arr2);
    
    arr2 = {10,20,30,40,50};
    display(arr);
    display(arr2);
    
    cout << "Size: " << arr.size() <<nline;
    cout << "Size: " << arr2.size() <<nline;
    
    arr.at(0) = 1000;
    arr[1] = 2000;
    
    display(arr);

    cout << "Front: " << arr2.front() << nline;
    cout << "Back: " << arr2.back() << nline;
};
void test2(){
    array<int, 5> arr {1,2,3,4,5};
    array<int, 5> arr2 {10,20,30,40,50};
    
    display(arr);
    display(arr2);
    
    arr.fill(0);
    
    display(arr);
    display(arr2);
    
    arr.swap(arr2);
    
    display(arr);
    display(arr2);
       
    
    
};

void test3(){
    
    array<int, 5> arr {1,2,3,4,5};
    
    int *ptr = arr.data();
    
    cout << ptr << nline;
    cout << *ptr << nline;
    *ptr = 1000;
    display(arr);
};
void test4(){
    
    array<int, 5> arr {2,4,5,3,1};
    display(arr);
    sort(arr.begin(), arr.end());
    display(arr);
    
};
void test5(){
    array<int, 5> arr {2,4,5,3,1};
    
    auto min_num = min_element(arr.begin(), arr.end());
    auto max_num = max_element(arr.begin(), arr.end());
    cout << "Min: " << *min_num << nline;
    cout << "Max: " << *max_num << nline;
    
};void test6(){
    array<int, 5> arr {1,2,3,3,5};
    
    auto adjacent = adjacent_find(arr.begin(), arr.end());
    
    if (adjacent != arr.end()) {
        cout << "Adjecent Element " << *adjacent << nline;
    }else{
        cout << "No adjecent Found\n";
    }
};
void test7(){
    array<int, 5> arr {1,2,3,4,5};
    
    int sum = accumulate(arr.begin(), arr.end(), 0);
    
    cout << "Sum = " << sum << nline;
};
void test8(){
    array<int, 10> arr {1,2,2,3,2,3,3,3,3,3};
    
    auto count =::count(arr.begin(), arr.end(), 3);
    
    cout << "Count: " << count << nline;
};
void test9(){
    array<int, 10> arr{1,2,20,30,200,54,43,35,36,73};
    
    auto count_if = ::count_if(arr.begin(), arr.end(), [] (int x) {return x > 10 && x < 200;});
    
    cout << "Found " << count_if << " elements\n";
};
int main(int argc, const char * argv[]) {
    // insert code here...

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();


    return 0;
}
