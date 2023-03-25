//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    // void bfs(int row,int col,vector<vector<int>>&vis, vector<vector<char>>&grid){
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     vis[row][col] = 1;
    //     queue<pair<int,int>> q;
    //     q.push( {row,col} );
    //     while(q.size() != 0){
    //         int r = q.front().first;
    //         int c = q.front().second;
    //         q.pop();
    //         ////// neighbours ko check krna hai
    //         for(int delrow = -1;delrow <= 1;delrow++){
    //             for(int delcol = -1;delcol <= 1;delcol++){
    //                 int nrow = r + delrow;
    //                 int ncol = c + delcol;
    //                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == '1'){
    //                     vis[nrow][ncol] = 1;
    //                     q.push( {nrow,ncol} );
    //                 }
    //             }
    //         }
    //     }
    // }
    
    // int numIslands(vector<vector<char>>& grid) {
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     int c=0;
    //     vector<vector<int>> vis(n,vector<int>(m,0));
    //     for(int row=0;row<n;row++){
    //         for(int col=0;col<m;col++){
    //             if(vis[row][col] == 0 && grid[row][col] == '1'){
    //                 c++;
    //                 bfs(row,col,vis,grid);
    //             }
    //         }
    //     }
    //     return c;
    // }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     void dfs(int row,int col,vector<vector<int>>&vis, vector<vector<char>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        
            ////// neighbours ko check krna hai
            for(int delrow = -1;delrow <= 1;delrow++){
                for(int delcol = -1;delcol <= 1;delcol++){
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == '1'){
                        dfs(nrow,ncol,vis,grid);
                    }
                }
            }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int c=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(vis[row][col] == 0 && grid[row][col] == '1'){
                    c++;
                    dfs(row,col,vis,grid);
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends