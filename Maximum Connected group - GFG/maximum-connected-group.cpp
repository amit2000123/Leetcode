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
    int MaxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        DisjointSet ds(n*n);
        
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col] == 1){
                    int u = row * n + col;
                    for(int i=0 ; i < 4; i++){
                        int nr = row + delrow[i];
                        int nc = col + delcol[i];
                        if(nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 1){
                            int v = nr * n + nc;
                            ds.unionBySize(u , v);
                        }
                    }
                }
            }
        }
        int maxi = INT_MIN;
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col] == 0){
                    
                    unordered_set<int>s;
                    for(int i=0 ; i < 4; i++){
                        int nr = row + delrow[i];
                        int nc = col + delcol[i];
                        if(nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 1){
                            int v = nr * n + nc;
                            int p = ds.findUPar(v);
                            
                            s.insert(p);
                            
                        }
                    }
                    int num = 0;
                    for(auto i : s){
                        num += ds.size[i];
                    }
                    maxi = max(maxi , num + 1);
                }
            }
        }
        
        for(int i=0;i<n*n;i++){
            maxi = max(maxi , ds.size[ds.findUPar(i)]);
        }
        
        return maxi;
        
        
        
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout<<obj.MaxConnection(grid)<<"\n";
    }
}

// } Driver Code Ends