//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	
// 	void dfs(int node,vector<int> adj[],stack<int> &s,vector<int> &vis){
// 	    vis[node] = 1;
	    
// 	    for(auto adjnode : adj[node]){
// 	        if(vis[adjnode] == 0){
// 	            dfs(adjnode,adj,s,vis);
// 	        }
// 	    }
// 	    s.push(node);
// 	}
	
	
// 	vector<int> topoSort(int v, vector<int> adj[]) 
// 	{
// 	    vector<int> vis(v,0) , ans;
// 	    stack<int> s;
// 	    for(int i=0;i<v;i++){
// 	        if(vis[i] == 0){
// 	            dfs(i,adj,s,vis);
// 	        }
// 	    }
// 	    while(s.size() != 0){
// 	        ans.push_back(s.top());
// 	        s.pop();
// 	    }
// 	    return ans;
// 	}






vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<int>indeg(v,0);
	    vector<int>ans;
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
	    return ans;
	}















};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends