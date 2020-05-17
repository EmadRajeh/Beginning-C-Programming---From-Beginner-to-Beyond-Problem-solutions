#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {
    

    //Control Flow challenge
 ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  
 vector<int> numbers{4,53,63,42,65,353,2};
  while (true) {
      cout << "P - Print Numbers\n"
             << "A - Add a Number\n"
             << "M - Display MEAN of the Numbers\n"
             << "M - Display the Smallest Number\n"
             << "L - Display the Largest Number\n"
         << "Q - Quit\n\n";
        
         char choice;
         cout << "Enter your choice: ";
         cin >> choice;
         
         
      if (choice == 'P' || choice == 'p') {
          if (numbers.size()== 0) {
              cout << "[] - The list is empty" << "\n";
          } else{
              cout << "[ ";
              for(auto i: numbers){
                  cout << i << " ";
              }
              cout << "]\n\n";
              continue;
          }
      }else if(choice == 'A' || choice == 'a'){
          int x;
          cout << "Enter an number to add: ";
          cin >> x;
          numbers.push_back(x);
          cout << x << " is added" << "\n\n";
          continue;
      }else if(choice == 'M' || choice == 'm'){
          double sum = 0;
          if (numbers.size() == 0) {
              cout << "Unable to calculate the mean - no data!" << "\n\n";
          }else{
              for(auto n : numbers){
                             sum += n;
                         }
              cout << "Mean = " << sum / numbers.size() << "\n\n";
          }
          continue;
      
      }else if(choice == 'S' || choice == 's'){
          if(numbers.size() == 0){
              cout << "Unable to determine the smallest number - empty list" << "\n\n";
          }else{
              int smallest = numbers.at(0);
              for (int i = 0; i < numbers.size(); i++) {
                  if (numbers.at(i) < smallest) {
                      smallest = numbers.at(i);
                  }
              }
              cout << "The Smallest Number is " << smallest << "\n\n";
          }
          continue;
      }else if(choice == 'L' || choice == 'l'){
          if(numbers.size() == 0){
              cout << "Unable to determine the largest number - empty list" << "\n\n";
          }else{
              int largest = numbers.at(0);
              for (int i = 0; i < numbers.size(); i++) {
                  if (numbers.at(i) > largest) {
                      largest = numbers.at(i);
                  }
              }
              cout << "The Largest Number is " << largest << "\n\n";
          }
          continue;
      }
      else if(choice == 'Q' || choice == 'q'){
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
