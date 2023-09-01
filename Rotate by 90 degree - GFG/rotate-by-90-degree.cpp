//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    // void rotateby90(vector<vector<int> >& matrix, int n) 
    // { 
    //     vector<vector<int>> dummy(n,vector<int>(n,0));
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             dummy[n-1-j][i] = matrix[i][j];
    //         }
    //     }
    //     matrix = dummy;
    // } 
    
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
    } 
    
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends