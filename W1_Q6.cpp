#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int k)
{
    vector<vector<int>> ans;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int p = j + 1; p < n; p++) {
                if (arr[i] + arr[j] + arr[p] == k) {

                    vector<int> triplet;
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[p]);
                    ans.push_back(triplet);
                }
            }
        }
    }

    return ans;
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    int k = 11;
    vector<vector<int>> ans = findTriplets(arr , 5 ,k);

    for(int i = 0 ; i<ans.size() ; i++){
        for(int j = 0 ; j<3 ; j++){
            cout<< ans[i][j]<<" ";
        }
        cout<<endl;
    }
}