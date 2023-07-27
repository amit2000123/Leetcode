//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// class Solution
// {
// 	public:
// 	//Function to find sum of weights of edges of the Minimum Spanning Tree.
//     int spanningTree(int v, vector<vector<int>> adj[])
//     {
//         priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
//         pq.push({0,0}); // {dist ,{node,parent}} if we want mst also 
//         // only want sum so {dist,node}
//         vector<int> vis(v,0);
//         // vector<pair<int,int>> mst;
//         int sum = 0;
//         while(pq.size() != 0){
//             int wt = pq.top().first;
//             int node = pq.top().second;
//             // int parent = pq.top().second.second;
//             pq.pop();
//             if(vis[node] == 0){
//                 vis[node] = 1;
//                 // mst.push_back({parent , node});
//                 sum += wt;
//                 for(auto i : adj[node]){
//                     int adjnode = i[0];
//                     int dist = i[1];
//                     pq.push({dist, adjnode});
//                 }
//             }
            
            
//         }
//         return sum;
        
        
//     }
// };




class DisjointSet{
    vector<int> rank , size,parent;
    
    public :
        
        DisjointSet(int n){
            rank.resize(n+1,0);
            size.resize(n+1);
            parent.resize(n+1);
            for(int i=0;i<=n;i++){
                parent[i] = i;
                size[i] = 1;
            }
        }      
        
        int findUPar(int node){
            if(node == parent[node]){
                return node;
            }
            return parent[node] = findUPar(parent[node]);
        }
        
        void unionByRank(int u , int v){
            int ulp_u = findUPar(u);
            int ulp_v = findUPar(v);
            if(ulp_u == ulp_v) return;
            if(rank[ulp_u] < rank[ulp_v]){
                parent[ulp_u] = ulp_v;
            }
            else if(rank[ulp_v] < rank[ulp_u]){
                parent[ulp_v] = ulp_u;
            }
            else{
                parent[ulp_u] = ulp_v;
                rank[ulp_v]++;
            }
        }
        
        
        void unionBySize(int u , int v){
            int ulp_u = findUPar(u);
            int ulp_v = findUPar(v);
            if(ulp_u == ulp_v) return;
            if(size[ulp_u] < size[ulp_v]){
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }
           
            else{
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
        }
};






 class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int v, vector<vector<int>> adj[])
    {
        vector<pair<int,pair<int,int>>> edge;
        for(int i=0;i<v;i++){
            for(auto it : adj[i]){
                int node = i;
                int adjnode = it[0];
                int wt = it[1];
                edge.push_back({wt , {node , adjnode}});
                // edge.push_back({wt , {adjnode , node}});
                
            }
        }
        sort(edge.begin(),edge.end());
        DisjointSet ds(v);
        int sum = 0;
        for(auto i : edge){
            int wt = i.first;
            int node = i.second.first;
            int adjnode = i.second.second;
            if(ds.findUPar(node) != ds.findUPar(adjnode)){
                   sum += wt;
                   ds.unionBySize(node , adjnode);
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