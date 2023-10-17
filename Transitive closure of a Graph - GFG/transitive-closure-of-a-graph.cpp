//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    vector<vector<int>> transitiveClosure(int n, vector<vector<int>> mat)
    {
        vector<vector<int>> vec = mat;
       
        for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // if() vec[i][j] = 1;
                
                    // if(mat[i][j] == 0 && i != j && k != i && k!=j ){
                    if(i == j) mat[i][i] = 1;
                    
                        if((mat[i][k] == 1 && mat[k][j] == 1 )){
                            mat[i][j] = 1;
                        }
                    // } 
                }
            }
        }
        // cout<<"ruk jaa" <<endl;
        // cout<<mat[0][1] <<" " << mat[0][4] <<" " << mat[4][1]<<endl;
        
        //   for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(i == j) vec[i][j] = 1;
        //     }
        // }
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends