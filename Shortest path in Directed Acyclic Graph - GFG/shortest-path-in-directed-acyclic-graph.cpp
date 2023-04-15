//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    void toposort(int node ,vector<pair<int,int>> adj[],vector<int> &vis, stack<int> &st ){
        vis[node] = 1;
        for(auto adjnode : adj[node] ){
            int v = adjnode.first;
            int wt = adjnode.second;
            if(vis[v] == 0){
                toposort(v,adj,vis,st);
            }
        }
        st.push(node);
    }
  
     vector<int> shortestPath(int n,int m, vector<vector<int>>& edges){
        vector<pair<int,int>> adj[n];
        for(auto i : edges){
            adj[i[0]].push_back({i[1] , i[2]});
        }
        /// toposort using dfs
        vector<int> vis(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            if(vis[i] == 0){
                toposort(i,adj,vis,st);
            }
        }
        /////
        vector<int> dist(n,1e9);
        dist[0] = 0;
        while(st.size() != 0){
            int node = st.top();
            st.pop();
            for(auto adjnode : adj[node]){
                int v = adjnode.first;
                int wt = adjnode.second;
                if(dist[node] + wt < dist[v]){
                    dist[v] = dist[node] + wt;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(dist[i] == 1e9) dist[i] = -1;   
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends