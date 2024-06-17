#include<iostream>
#include<string>
using namespace std;


int fib(int n) {
    if(n==0 || n==1){         //base case
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}


int main(){
    int n = 4;
    int ans = fib(4);
    cout<<ans;
}