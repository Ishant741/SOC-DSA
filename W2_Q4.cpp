#include<iostream>
#include<string>
using namespace std;

double myPow(double x, int n) {
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else{
        return x*myPow(x,n-1);
    }
}


int main(){
    int ans= myPow(2,5);
    cout<<ans;
}