#include<iostream>
using namespace std;

void reverseArray(int arr[] , int n){

    for(int i = 0 ; i<n/2 ; i++){
        swap(arr[i] , arr[n-i-1]);
    }

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
}


int main(){
    int arr[4] = {1 , 2 , 3 , 4};
    reverseArray(arr , 4);
}