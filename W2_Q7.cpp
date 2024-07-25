#include<iostream>
using namespace std;

class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int n=str.length();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                count--;
            }
            else{
                count++;
            }
            if(count==0){
                ans++;
            }
            
        }
        if(count==0){
            return ans;
        }
        return -1;
    }
};

int main(){
    return 0;
}