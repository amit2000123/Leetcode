//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int node , vector<int> adj[] , vector<int> &vis, vector<int> &pathvis){
        vis[node] = 1;
        pathvis[node] = 1;
        for(auto adjacentnode : adj[node]){
            if(vis[adjacentnode] == 0){
                if(dfs(adjacentnode,adj,vis,pathvis) == true) return true;
            }
            else if(pathvis[adjacentnode] == 1) return true;
        }
        pathvis[node] = 0;
        return false;
        
    }
    bool isCyclic(int v, vector<int> adj[]) {
        
        vector<int> vis(v,0);
        vector<int> pathvis(v,0);
        for(int i=0;i<v;i++){
            if(vis[i] == 0){
                if(dfs(i,adj,vis,pathvis)) return true;
            }
        }
        return false;
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
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends