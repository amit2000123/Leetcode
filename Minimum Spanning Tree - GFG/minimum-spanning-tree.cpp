//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int v, vector<vector<int>> adj[])
    {
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
        pq.push({0,0}); // {dist ,{node,parent}} if we want mst also 
        // only want sum so {dist,node}
        vector<int> vis(v,0);
        // vector<pair<int,int>> mst;
        int sum = 0;
        while(pq.size() != 0){
            int wt = pq.top().first;
            int node = pq.top().second;
            // int parent = pq.top().second.second;
            pq.pop();
            if(vis[node] == 0){
                vis[node] = 1;
                // mst.push_back({parent , node});
                sum += wt;
                for(auto i : adj[node]){
                    int adjnode = i[0];
                    int dist = i[1];
                    pq.push({dist, adjnode});
                }
            }
            
            
        }
        return sum;
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends