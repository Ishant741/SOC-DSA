#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) 
    {
        map<int,int> count;      // to keep track of numbers and their occurence
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;                // elements atleast occur once
        for(auto it : count )
        {
            if(it.second>1)
                ans.push_back(it.first);
        }
        return ans;
    }


int main(){
    vector<int> nums = {1,1,2,3,4,4,5,5,6,7,8,8};
    vector<int> ans = findDuplicates(nums);
}