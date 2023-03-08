//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    // void dfs(int row, int col ,int n,int m,vector<vector<int>> &grid,vector<vector<int>> &vis){
    //     vis[row][col] = 1;
    //     int delrow[] = {-1,0,1,0};
    //     int delcol[] = {0,1,0,-1};
    //     for(int i=0;i<4;i++){
    //         int nrow = row + delrow[i];
    //         int ncol = col + delcol[i];
    //         if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
    //             dfs(nrow,ncol,n,m,grid,vis);
    //         }
    //     }
    // }
    
    // int numberOfEnclaves(vector<vector<int>> &grid) {
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     vector<vector<int>> vis(n,vector<int>(m,0));
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if( (i==0 || i==n-1 || j==0 || j==m-1) && grid[i][j] == 1  ){
    //                 dfs(i,j,n,m,grid,vis);
    //             }
    //         }
    //     }
    //     int c=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if( grid[i][j] == 1 && vis[i][j] == 0 ){
    //                 c++;
    //             }
    //         }
    //     }
    //     return c;
    // }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    void bfs(int row, int col ,int n,int m,vector<vector<int>> &grid,vector<vector<int>> &vis){
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col] = 1;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(q.size() != 0){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                vis[nrow][ncol] = 1;
                q.push( {nrow,ncol} );
            }
        }
      }
        
        
        
        
    }
    
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( (i==0 || i==n-1 || j==0 || j==m-1) && grid[i][j] == 1  ){
                    bfs(i,j,n,m,grid,vis);
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( grid[i][j] == 1 && vis[i][j] == 0 ){
                    c++;
                }
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends