//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    // vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    // {
    //     priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
    //     pq.push({0,s});
    //     vector<int> dist(v,1e9);
    //     dist[s] = 0;
        
    //     while(pq.size() != 0){
    //         int d = pq.top().first;
    //         int node = pq.top().second;
    //         pq.pop();
    //         for(auto i : adj[node]){
    //             int adjnode = i[0];
    //             int wt = i[1];
    //             if(d + wt < dist[adjnode]){
    //                 pq.push({d+wt , adjnode});
    //                 dist[adjnode] = d + wt;
    //             }
    //         }
    //     }
    //     return dist;
        
    // }
    
    
    
    
    
    
    
    
    
    
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        set<pair<int,int>> pq;
        pq.insert({0,s});
        vector<int> dist(v,1e9);
        dist[s] = 0;
        
        while(pq.size() != 0){
            auto it = *(pq.begin());
            int d = it.first;
            int node = it.second;
            pq.erase(it);
            
            for(auto i : adj[node]){
                int adjnode = i[0];
                int wt = i[1];
                if(d + wt < dist[adjnode]){
                    pq.erase({wt,adjnode});
                    pq.insert({d+wt , adjnode});
                    dist[adjnode] = d + wt;
                }
            }
        }
        return dist;
        
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends