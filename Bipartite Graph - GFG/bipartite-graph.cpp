//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    bool bfs(int start , vector<int>adj[],vector<int> &color){
        queue<int>q;
        q.push(start);
        color[start] = 0;
        while(q.size() != 0){
            int node = q.front();
            q.pop();
            for(auto adjnode : adj[node]){
                if(color[adjnode] == -1){
                    color[adjnode] = !(color[node]);
                    q.push(adjnode);
                }
                else if(color[adjnode] == color[node]) return false;
                
            }
        }
        return true;
    }

	bool isBipartite(int v, vector<int>adj[]){
	    vector<int> color(v,-1);
	    for(int i=0;i<v;i++){
	        if(color[i] == -1){
	            if(bfs(i,adj,color) == false)return false;
	        }
	    }
	    return true;
	    
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
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends