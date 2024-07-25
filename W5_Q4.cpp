#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool> visited;
        queue<int> q;q.push(0);
        
        vector<int> ans;
        int i=0;
        
        while(!q.empty())
        {
            int f=q.front();q.pop();
            if(visited.find(f) == visited.end()) 
            {
                visited[f] = true;
                ans.push_back(f);
                
                for(auto &j:adj[f])
                {
                    q.push(j);
                }
            }
        }
        return ans;
    }