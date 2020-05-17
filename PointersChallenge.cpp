
#include <bits/stdc++.h>
#include <string>
#define line "\n"

using namespace std;
void print(int *arr, size_t size);
int *apply_all(int *arr1, size_t size_1, int *arr2, size_t size_2);


void print(int *arr, size_t size){
    for(size_t i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int *apply_all(int *arr1, size_t size_1, int *arr2, size_t size_2){
    int *product_arr{nullptr};
    
    product_arr = new int[size_1 * size_2];
    int pos{0};
    for (size_t i = 0; i < size_1; i++) {
        for (size_t j = 0; j < size_2; j++) {
            product_arr[pos] = arr1[i] * arr2[j];
            ++pos;
        }
    }

    return product_arr;
    
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    const size_t size_1 {5};
    const size_t size_2 {3 };
    
    int arr1[] {1,2,3,4,5};
    int arr2[] {10,20,30};
    
    cout << "Array 1: ";
    print(arr1, size_1);
    
    cout << "Array 2: ";
    print(arr2, size_2);
    
    int *result = apply_all(arr1, size_1, arr2, size_2);
    size_t size = size_2 * size_1;
    
    print(result, size);
    
    return 0;
}
