#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Ankit";
    string str2 = "Vishwakarma";

    cout<<(str1 == str2)<<endl; // here it is very easy to compare but if we are in 'char' then it should difficult to compare , where we have to compare each char in [] brackets
    cout<<(str1 > str2)<<endl; // it will give 0, because in str1 , "A" alphabet comes first in lexigraphic oreder with compare to "V"
    // because ascii value of 'A' = 65 and 'V' = 86 so its clear

    cout<<str1.length()<<endl;
}