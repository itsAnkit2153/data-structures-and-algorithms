#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = INT_MIN;
    int second = 0;
    for(int i=0; i<n; i++){
        if(maxi<arr[i]){
            second = maxi;
            maxi = arr[i];
        }
    }
    cout<<"Second Max: "<<second<<endl;

}