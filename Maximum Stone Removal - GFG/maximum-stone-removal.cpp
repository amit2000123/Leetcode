//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class DisjointSet{
    public:
        vector<int>size , parent;
        DisjointSet(int n){
            size.resize(n+1,1);
            parent.resize(n+1);
            for(int i=0;i<=n;i++){
                parent[i] = i;
            }
        }
        
        int findUPar(int node){
            if(node == parent[node]) return node;
            return parent[node] = findUPar(parent[node]);
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



class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones, int n) {
        int maxrow = 0;
        int maxcol = 0;
        for(auto i : stones){
            maxrow = max(maxrow,i[0]);
            maxcol = max(maxcol,i[1]);
        }
        DisjointSet ds(maxrow + maxcol + 1);
        
        unordered_map<int,int> m;
        
        
        for(auto i : stones){
            int row = i[0];
            int col = i[1] + maxrow + 1;
            ds.unionBySize(row , col);
            m[row]=1;
            m[col]=1;
        }
        
        int c = 0;
        for(auto i : m){
            if(ds.findUPar(i.first) == i.first) c++;
        }
        return n- c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends