//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int n, vector<vector<int>>& edges, int s) {
        // vector<pair<int,int>>adj[n];
        // for(auto i : edges){
        //     adj[i[0]].push_back({i[1],i[2]});
        // }
        vector<int> dist(n,1e8);
        dist[s] = 0;
        for(int i=0;i<n-1;i++){
            for(auto it : edges){
                if(dist[it[0]] !=  1e8){
                    if( dist[it[0]] + it[2] < dist[it[1]] ){
                        dist[it[1]] = dist[it[0]] + it[2];
                    }
                }
            }
        }
        // vector<int> v = dist;
        for(auto it : edges){
                if(dist[it[0]] !=  1e8){
                    if( dist[it[0]] + it[2] < dist[it[1]] ){
                        return {-1};
                    }
                }
            }
        // if(v != dist) return {-1};
        return dist;;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, m;
        cin >> N >> m;
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

        int src;
        cin >> src;

        Solution obj;
        vector<int> res = obj.bellman_ford(N, edges, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends