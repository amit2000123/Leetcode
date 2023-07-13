//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // parent array jo banayenge usse hi required ans mil jayega reverse order mei
        
        
        vector<pair<int,int>> adj[n+1];
        for(auto i : edges){
            adj[i[0]].push_back({i[1] , i[2]});
            adj[i[1]].push_back({i[0] , i[2]});
        }
        
        
        vector<int> dist(n+1,1e9);
        vector<int> parent(n+1);
        for(int i=1;i<n+1;i++) parent[i] = i;
        dist[1] = 0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
        pq.push({0,1});           //{dist,node}
        
        while(pq.size() != 0){
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto i : adj[node]){
                int adjnode = i.first;
                int wt = i.second;
                if(d + wt < dist[adjnode]){
                    dist[adjnode] = d + wt;
                    pq.push({d+wt , adjnode});
                    parent[adjnode] = node;
                }
            }
        }
        
        vector<int> ans;
        int node = n;
        while(parent[node] != node){
            ans.push_back(node);
            node = parent[node];
        }
        ans.push_back(1);
        reverse(ans.begin(),ans.end());
        if(dist[n] == 1e9) return {-1};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
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