#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=6;
    for(int i=0; i<n; i++){
        if(x==arr[i]){
            x=i;
        }
    }
    cout<<"index of target Element: "<<x<<endl;
}