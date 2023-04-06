//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> pre) 
    {
        vector<int>adj[n];
        for(int i=0;i<m;i++){
            int f = pre[i][0];
            int s = pre[i][1];
            adj[s].push_back(f);
        }
        vector<int>indeg(n,0);
        for(int i=0;i<n;i++){
            for(auto adjnode : adj[i]){
                indeg[adjnode]++;
            }
        }
        
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        vector<int> ans;
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
        
        if(ans.size() < n){
            // ans.clear();
            // return ans;
            return {};
        }
        return ans;
    }
};

//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
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
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends