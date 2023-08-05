//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void dfs(int node , int parent , vector<int> adj[] , vector<int> &vis, vector<int> &tin, vector<int> &low, vector<int> &mark, int timer){
        vis[node] = 1;
        tin[node] = low[node] = timer;
        timer++;
        int child = 0;
        for(auto adjnode : adj[node]){
            if(adjnode != parent){
                if(vis[adjnode] == 0){
                    dfs(adjnode,node,adj,vis,tin,low,mark,timer);
                    low[node] = min(low[node] , low[adjnode]);
                    if(low[adjnode] >= tin[node] && parent != -1){
                        mark[node] = 1;
                    }
                    child++;
                }
                
                else{
                    low[node] = min(low[node] , tin[adjnode]);
                }
                
            }
            
        }
        
        if(child > 1 && parent == -1) mark[node] = 1;
    }
  
    vector<int> articulationPoints(int v, vector<int>adj[]) {
        vector<int> vis(v,0) , tin(v,0) , low(v,0);
        int timer = 1;
        // vector<int> art;
        vector<int> mark(v,0);
        for(int i=0;i<v;i++){
            if(vis[i] == 0){
                dfs(i,-1,adj,vis,tin,low,mark,timer);
            }
        }
        vector<int> ans;
        for(int i=0;i<v;i++){
            if(mark[i] == 1){
                ans.push_back(i);
            }
        }
        
        if(ans.size() == 0) return {-1};
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends