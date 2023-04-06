//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    // safe nodes == wo saare nodes jo kisi cycle ka hissa nhi hai
    // in short, jin nodes ki pathvis[node] == 0 hai , wo sabhi kisi cycle ka hissa nhi hai aur safe nodes hai.
    //  bool dfs(int node , vector<int> adj[] , vector<int> &vis, vector<int> &pathvis){
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
  
    // vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
    //     vector<int> vis(v,0);
    //     vector<int> pathvis(v,0);
    //     bool ans;
    //     vector<int> vec;
    //     for(int i=0;i<v;i++){
    //         if(vis[i] == 0){
    //             if(dfs(i,adj,vis,pathvis)) ans = true;  // variable "ans" is redundant
    //         }
    //     }
    //     for(int i=0;i<v;i++){
    //         if(pathvis[i] == 0) vec.push_back(i);
    //     }
    //     return vec;
    // }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // for visited ,
    //                 vis[i] = 1;
    // for pathvisited , 
    //                 vis[i] = 2
    
    
    // bool dfs(int node , vector<int> adj[] , vector<int> &vis){
    //     vis[node] = 2;
    //     for(auto adjnode : adj[node]){
    //         if(vis[adjnode] == 0){
    //             if(dfs(adjnode,adj,vis) == true) return true;
    //         }
    //         else if(vis[adjnode] == 2) return true;
    //     }
    //     vis[node] = 1;
    //     return false;
        
    // }
  
    // vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
    //     vector<int> vis(v,0);
    //     vector<int>vec;
    //     bool ans;
    //     for(int i=0;i<v;i++){
    //         if(vis[i] == 0){
    //             if(dfs(i,adj,vis)) ans = true;
    //         }
    //     }
        
    //     for(int i=0;i<v;i++){
    //         if(vis[i] == 1){
    //             vec.push_back(i);
    //         }
    //     }
    //     return vec;
    // }
    
    
    ////// BFS (Toposort)
// Initially the terminal nodes are those who have outdegree 0 
// but after reversal the terminal nodes becomes those which have indegree 0 
// so we can apply Kahn's algo to find all the nodes connected to it  which have linear dependency on the terminal node or is on the path which leads to terminal node 
// so if the nodes is a part of a cycle or points to a cycle , that path cannot lead to terminal node as each node in that  path will have cyclic dependency


    
    
    vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
        vector<int> adjrev[v];
        vector<int> indeg(v,0);
        for(int i=0;i<v;i++){
            for(auto adjnode : adj[i]){
                adjrev[adjnode].push_back(i);
                indeg[i]++;
            }
        }
        queue<int> q;
        vector<int> safenode;
        for(int i=0;i<v;i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        
        while(q.size() != 0){
            int node = q.front();
            q.pop();
            safenode.push_back(node);
            for(auto adjnode : adjrev[node]){
                indeg[adjnode]--;
                if(indeg[adjnode] == 0){
                    q.push(adjnode);
                }
            }
        }
        
        sort(safenode.begin(),safenode.end());
        return safenode;
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