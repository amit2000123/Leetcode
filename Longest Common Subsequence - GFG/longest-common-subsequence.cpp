//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
    /////  MEMOIZATION
    
    
    
    // int f(int ind1,int ind2,string s1, string s2,vector<vector<int>> &dp){
    //     if(ind1 == 0 || ind2 == 0){
    //         return 0;
    //     }
    //     if(dp[ind1][ind2] != -1) return dp[ind1][ind2];
    //     if(s1[ind1-1] == s2[ind2-1]){
    //         return dp[ind1][ind2] = 1 + f(ind1-1,ind2-1,s1,s2,dp);
    //     }
    //     return dp[ind1][ind2] = 0 + max( f(ind1-1,ind2,s1,s2,dp) , f(ind1,ind2-1,s1,s2,dp) );
    // }
    // int lcs(int x, int y, string s1, string s2)
    // {
    //     vector<vector<int>> dp (x+1,vector<int>(y+1,-1));
    //     return f(x,y,s1,s2,dp);
    // }
    
    
    //// TABULATION
    
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>> dp (x+1,vector<int>(y+1,0));
        for(int i=0;i<=x;i++){
            dp[i][0] = 0;          //base case
        }
        for(int j=0;j<=y;j++){ 
            dp[0][j] = 0;       //base case
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 0 + max( dp[i-1][j] ,dp[i][j-1]  );

                }
            }
        }
        return dp[x][y];
    }
    
    
    
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends