#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans;
    int i = 0;
    int j = 0;

    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else{
            ans.push_back(nums2[j]);
            j++;
        }
    }

    while(i<m){
        ans.push_back(nums1[i]);
        i++;
    }

    while(j<n){
        ans.push_back(nums2[j]);
        j++;
    }

    for(int k = 0 ; k<(m+n) ; k++){
        cout<< ans[k]<<"  ";
    }
}


int main(){
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {6};

    merge(nums1,5,nums2,1);
}