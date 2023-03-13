//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    // bool dfs(int node , vector<int> adj[] , vector<int> &vis, vector<int> &pathvis){
    //     vis[node] = 1;
    //     pathvis[node] = 1;
    //     for(auto adjacentnode : adj[node]){
    //         if(vis[adjacentnode] == 0){
    //             if(dfs(adjacentnode,adj,vis,pathvis) == true) return true;
    //         }
    //         else if(pathvis[adjacentnode] == 1) return true;
    //     }
    //     pathvis[node] = 0;
    //     return false;
        
    // }
    // bool isCyclic(int v, vector<int> adj[]) {
        
    //     vector<int> vis(v,0);
    //     vector<int> pathvis(v,0);
    //     for(int i=0;i<v;i++){
    //         if(vis[i] == 0){
    //             if(dfs(i,adj,vis,pathvis)) return true;
    //         }
    //     }
    //     return false;
    // }
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /////   space optimized by eliminating the use of pathvis[];
    //  for visited,
    //                vis[node] = 1;
    //  for pathvisited
    //                vis[node] = 2;
    
    
    
    // bool dfs(int node , vector<int> adj[] , vector<int> &vis){
    //     vis[node] = 2;
        
    //     for(auto adjacentnode : adj[node]){
    //         if(vis[adjacentnode] == 0){
    //             if(dfs(adjacentnode,adj,vis) == true) return true;
    //         }
    //         else if(vis[adjacentnode] == 2) return true;
    //     }
    //     vis[node] = 1;
    //     return false;
        
    // }
    // bool isCyclic(int v, vector<int> adj[]) {
        
    //     vector<int> vis(v,0);
    //     for(int i=0;i<v;i++){
    //         if(vis[i] == 0){
    //             if(dfs(i,adj,vis)) return true;
    //         }
    //     }
    //     return false;
    // }
    
    
    
    
        
    
    
    
    
    
    
    
    
    
    bool isCyclic(int v, vector<int> adj[]) {
        vector<int> indeg(v,0);
        for(int i=0;i<v;i++){
            for(auto adjnode : adj[i]){
                indeg[adjnode]++;
            }
        }
        queue<int> q;
        for(int i=0;i<v;i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(q.size() != 0){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto adjnode : adj[node]){
                indeg[adjnode]--;
                if(indeg[adjnode] == 0){
                    q.push(adjnode);
                }
            }
        }
        if(ans.size() < v) return true;
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