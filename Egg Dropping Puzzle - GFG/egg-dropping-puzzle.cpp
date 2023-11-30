//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    
    int f(int floors , int egg , vector<vector<int>> &dp){
        if(floors == 0 || floors == 1) return floors;
        if(egg == 1) return floors;
        
        if(dp[floors][egg] != -1) return dp[floors][egg];
        int mini = 1e9;
        
        for(int k=1;k<=floors;k++){
            int temp = 1 + max(f( k-1 , egg-1 ,dp) , f( floors - k , egg , dp));
            mini = min(mini , temp);
        }
        return dp[floors][egg] = mini;
    }
    
    int eggDrop(int n, int k) 
    {
        vector<vector<int>> dp(k+1,vector<int>(n+1,-1));
        return f(k ,n ,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends