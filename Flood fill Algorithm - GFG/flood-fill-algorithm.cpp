//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
    void dfs(int n,int m,int row ,int col ,vector<vector<int>>& ans,vector<vector<int>>& image,
    int newcolor,int inicolor,int delrow[],int delcol[]){
        ans[row][col] = newcolor;
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == inicolor && ans[nrow][ncol] != newcolor){
                // ans[nrow][ncol] = newcolor;
                dfs(n,m,nrow,ncol,ans,image,newcolor,inicolor,delrow,delcol);
            }
        }
    }
    
    
    // void bfs(int n,int m,int row ,int col ,vector<vector<int>>& ans,vector<vector<int>>& image,
    // int newcolor,int inicolor,int delrow[],int delcol[]){
    //     ans[row][col] = newcolor;
    //     queue<pair<int,int>>q;
    //     q.push({row,col});
    //     while(q.size() != 0){
    //         int r = q.front().first;
    //         int c = q.front().second;
    //         q.pop();
    //         for(int i=0;i<4;i++){
    //             int nrow = r + delrow[i];
    //             int ncol = c + delcol[i];
    //             if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == inicolor && ans[nrow][ncol] != newcolor){
    //                 ans[nrow][ncol] = newcolor;
    //                 q.push({nrow,ncol});
    //             }
    //     }
    //     }
        
    // }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int n = image.size();
        int m = image[0].size();
        int inicolor = image[sr][sc];
        vector<vector<int>>ans = image;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        dfs(n,m,sr,sc,ans,image,newcolor,inicolor,delrow,delcol);
        // bfs(n,m,sr,sc,ans,image,newcolor,inicolor,delrow,delcol);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends