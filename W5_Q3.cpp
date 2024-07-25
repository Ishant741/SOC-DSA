#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> adj[], vector<int>&ans, int vis[]){
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,ans,vis);
            }
        }
    }
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        int vis[V]={0};
        int node=0;
        dfs(node,adj,ans,vis);
        return ans;
    }
};

int main(){
    return 0;
}