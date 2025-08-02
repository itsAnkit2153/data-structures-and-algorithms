#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int st=0, end=n-1;
    while(st<end){
        swap(arr[st], arr[end]);
        st++, end--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}