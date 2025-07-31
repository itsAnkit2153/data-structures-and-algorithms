#include <iostream>
using namespace std;

int main(){
    char str[12]; // it require [] brackets
    cout<<"Enter the word: ";
    cin.getline(str, 12); // here 'cin.getline(str, 12)' is require for complete word or sentence to take input

    for(auto ch : str){
        cout<<ch<<" ";
    }
}

// for running code => g++ 02_strings/01_basics/01_code.cpp -o out && ./out