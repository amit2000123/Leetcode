//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class DisjointSet{
    public:
        vector<int> size , parent;
        DisjointSet(int n){
            size.resize(n+1 , 1);
            parent.resize(n+1);
            for(int i=0;i<=n;i++) parent[i] = i;
        }
        
        int findUPar(int node){
            if(node == parent[node]) return node;
            return parent[node] = findUPar(parent[node]);
        }
        
        void unionBySize(int u, int v){
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

class Solution {
  public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        DisjointSet ds(n * m);
        vector<vector<int>> vis(n,vector<int>(m,0));
        int c = 0;
        vector<int> ans;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(auto i : operators){
            int row = i[0];
            int col = i[1];
            int u = row * m + col;
            if(vis[row][col] == 0){
                vis[row][col] = 1;
                // ds.findUPar(u);
                c++;
                for(int i=0;i<4;i++){
                    int nr = row + delrow[i];
                    int nc = col + delcol[i];
                    int v = nr * m + nc;
                    if(nr >= 0 && nr < n && nc >= 0 && nc< m && vis[nr][nc] == 1 ){
                        if(ds.findUPar(u) != ds.findUPar(v)){
                            c--;
                            ds.unionBySize(u,v);
                        }
                        
                        
                    }
                }
                ans.push_back(c);
                
            }
            else{
                ans.push_back(c);
            }
            
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends