
#include <bits/stdc++.h>


using namespace std;

 void display_menu();
 void print_numbers(vector<int> vec);
 void add_numbers(int n, vector<int> &v);
 void get_mean(vector<int> &nums);
 void get_smallest(vector<int> &nums);
 void get_largest(vector<int> &nums);


 void display_menu(){

     cout << "P - Print Numbers\n"
         << "A - Add a Number\n"
         << "M - Display MEAN of the Numbers\n"
         << "M - Display the Smallest Number\n"
         << "L - Display the Largest Number\n"
         << "Q - Quit\n";
     cout << "\n";
             
 }
 //Print out function
 void print_numbers(vector<int> vec){
     cout << "\n[ ";
     for(auto v : vec){
         cout << v << " ";
     }
     cout << "]\n\n";
 }
 //Add a number to the vector function
 void add_numbers(int n, vector<int> &v){
     v.push_back(n);
     cout << "\n";
 }

 //function to get the mean
 void get_mean(vector<int> &nums){
     double sum = 0;
     if (nums.size() == 0) {
         cout << "Unable to calculate the mean - no data!" << "\n\n";
     }else{
         for(auto n : nums){
                        sum += n;
                    }
         cout << "Mean = " << sum / nums.size() << "\n\n";
     }
 }

 void get_smallest(vector<int> &nums){
     if(nums.size() == 0){
                cout << "Unable to determine the smallest number - empty list" << "\n\n";
            }else{
                int smallest = nums.at(0);
                for (int i = 0; i < nums.size(); i++) {
                    if (nums.at(i) < smallest) {
                        smallest = nums.at(i);
                    }
                }
                cout << "The Smallest Number is " << smallest << "\n\n";
            }
 }
 void get_largest(vector<int> &nums){
     if(nums.size() == 0){
                cout << "Unable to determine the largest number - empty list" << "\n\n";
            }else{
                int largest = nums.at(0);
                for (int i = 0; i < nums.size(); i++) {
                    if (nums.at(i) > largest) {
                        largest = nums.at(i);
                    }
                }
                cout << "The Largest Number is " << largest << "\n\n";
            }
 }
 int main(){
     
     ios_base::sync_with_stdio(0);
     cin.tie(nullptr);

     vector<int> nums{3,5,6,6,7,2};
     char choice;
   
     while(true){
         display_menu();
         cout << "Enter your choice: ";
         cin >> choice;
         cout << "\n";
         choice = toupper(choice);
         
         if(choice == 'P'){
             print_numbers(nums);

         } else if(choice == 'A'){
             cout << "Enter a number to add: ";
             int n;
             cin >> n;
             add_numbers(n, nums);
         } else if(choice == 'M'){
             get_mean(nums);
             continue;
         }else if(choice == 'S'){
             get_smallest(nums);
         continue;
     }else if(choice == 'L'){
         get_largest(nums);
         continue;
     }else if(choice == 'Q'){
         cout << "Goodbye" << "\n\n";
         break;
     }
     else{
         cout << "Unknown Selection, please try agian" << "\n\n";
         continue;
     }
     

     }
     

     return 0;
 }
 
