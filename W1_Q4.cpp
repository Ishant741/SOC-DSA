#include<iostream>
#include<map>
#include<vector>
using namespace std;

void sort012(int *arr, int n){
    vector<int> ans;
    map<int,int> count;

    for(int i = 0 ; i<n ; i++){
        count[arr[i]]++;
    }

    for(auto it : count )
        {
            for(int i=0 ; i<it.second ; i++){
                ans.push_back(it.first);
            }
        }
}


int main(){
    int arr[7] = {0,0,0,1,2,2,2};
    
}