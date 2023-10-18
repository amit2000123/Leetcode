//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool dfs(int node , vector<int> adj[] , vector<int> &vis , vector<int> &pathvis){
        vis[node] = 1;
        pathvis[node] = 1;
        for(auto adjnode : adj[node]){
            if(vis[adjnode] == 0){
                if(dfs(adjnode , adj , vis, pathvis) == true) return true;    
            }
            
            else if(pathvis[adjnode] == 1) return true;
        }
        pathvis[node] = 0;
        return false;
    }
    
    vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
        vector<int> vis(v , 0 ) , pathvis(v , 0);
        vector<int> ans;
        
        for(int i=0;i<v;i++){
            if(vis[i] == 0){
                dfs(i , adj , vis , pathvis);
            }
        }
        for(int i=0;i<v;i++){
            if(pathvis[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends