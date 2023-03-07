//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    void dfs(int node ,vector<int>adjlst[],vector<int> &vis){
        vis[node] = 1;
        for(auto i : adjlst[node]){
            if(vis[i] == 0){
                dfs(i,adjlst,vis);
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int n) {
        // matrix conversion to list
        vector<int>adjlst[n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i != j && adj[i][j] == 1){
                    adjlst[i+1].push_back(j+1);
                    adjlst[j+1].push_back(i+1);
                }
            }  
        }
        vector<int> vis(n+1,0);
        int c=0;
        for(int i=1;i<=n;i++){
            if(vis[i] == 0 ){
                c++;
                dfs(i,adjlst,vis);
            }
        }
        return c;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends