#include <bits/stdc++.h>


using namespace std;


int main(int argc, const char * argv[]) {
    
 //Encryption - Decryption (Characters and string) challenge
 
 (My solution)
 ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    string message {};
    cout << "Enter a message to encrypt: ";
    getline(cin, message);
    
    cout << "\nEncrypting message....." << "\n";
    
    string alph {"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-/'"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASR xznlwebgjhqdyvtkfuompciasr9876543210_|+"};
    
    
    

    //Encryption
    string cipher {""};

    for(char c : message){
        size_t position = alph.find(c);
        cipher.push_back(key.at(position));
    }
    cout << cipher << "\n";
    
    //Decrypting
    cout << "Decrypting message....." << "\n";
    string text {""};
    for(char c : cipher){
        size_t position = key.find(c);
        text.push_back(alph.at(position));
    }
   cout << text << "\n";
    
    
        
    //    for (int i = 0; i < message.length(); i++) {
    //          char c = message.at(i);
    //          size_t position = alph.find(c);
    //          cipher.push_back(key.at(position));
    //      }
    
    //    for (int i = 0; i < cipher.length(); i++) {
    //        char c = cipher.at(i);
    //        size_t position = key.find(c);
    //        text.push_back(alph.at(position));
    //    }

   
    
    
    
    return 0;
}
