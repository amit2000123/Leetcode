//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
public:
    
    void dfs(int row ,int col, int n,int m,vector<vector<char>> &mat,vector<vector<int>> &vis){
    
        int delrow[4] = {-1,0,1,0};
        int delcol[4] = {0,1,0,-1};
        vis[row][col] = 1;
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >=0 && nrow < n && ncol >= 0 && ncol < m && mat[nrow][ncol] == 'O' && vis[nrow][ncol] == 0){
                dfs(nrow,ncol,n,m,mat,vis);
            }
           
        }
    }
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        // for(int i=0;i<n;i++){
        //     if(vis[i][0] == 0 && mat[i][0] == 'O'){
        //         dfs(i,0,n,m,mat,vis);
        //     }
        //     if(vis[i][m-1] == 0 && mat[i][m-1] == 'O'){
        //         dfs(i,m-1,n,m,mat,vis);
        //     }
            
        // }
        // for(int j=0;j<m;j++){
        //         if(vis[0][j] == 0 && mat[0][j] == 'O'){
        //             dfs(0,j,n,m,mat,vis);    
        //         }
        //         if(vis[n-1][j] == 0 && mat[n-1][j] == 'O'){
        //             dfs(n-1,j,n,m,mat,vis);    
        //         }
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 || j==0 || j==m-1 ) && mat[i][j] == 'O'){
                    dfs(i,j,n,m,mat,vis);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == 0 && mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends