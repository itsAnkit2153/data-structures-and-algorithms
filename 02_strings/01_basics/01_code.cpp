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