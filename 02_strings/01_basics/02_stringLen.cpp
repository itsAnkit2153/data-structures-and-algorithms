#include <iostream>
using namespace std;

// in 'char' => it requie [] bracket and if we want to know about length the we should perform 'for' loop
int main(){
    char str[] = "Ankit Vishwakarma";
    int len=0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    cout<<"Length of String is: "<<len;
}