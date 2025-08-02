#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int sumn=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    //there is total 7 element so
    int m = n+1;
    // total sum 7 element 
    sumn = (m*(m+1))/2;
    
    cout<<"Missing Element is "<<sumn-sum<<endl;

}