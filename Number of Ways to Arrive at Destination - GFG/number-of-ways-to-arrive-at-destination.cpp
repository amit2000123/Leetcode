//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<long long,long long>> adj[n];
        for(auto i : roads){
            adj[i[0]].push_back( {i[1] , i[2]} );
            adj[i[1]].push_back( {i[0] , i[2]} );
        }


        vector<long long> dist(n,1e18);
        dist[0] = 0;
        vector<long long> ways(n,0);
        ways[0] = 1;
        priority_queue<pair<long long,long long> , vector<pair<long long,long long>> , greater<pair<long long,long long>>> pq;   // {dist,node}
        pq.push({0,0});

        while(pq.size() != 0){
            long long d = pq.top().first;
            long long node = pq.top().second;
            pq.pop();
            for(auto i : adj[node]){
                long long adjnode = i.first;
                long long cost = i.second;
                if(d + cost <= dist[adjnode]){
                    if(d + cost == dist[adjnode]){
                        ways[adjnode] = ways[adjnode] + ways[node];
                    }
                    else{
                        dist[adjnode] = d + cost;
                        ways[adjnode] = ways[node];
                        pq.push({d+cost , adjnode});
                    }
                    
                }
            }

        }
        return ways[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends