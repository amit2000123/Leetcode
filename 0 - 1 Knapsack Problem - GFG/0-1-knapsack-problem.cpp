//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int f(int ind , int w , int wt[] , int val[] , int n , vector<vector<int>> &dp){
        
        if(w < 0) return 0;
        if(ind == n) return 0;
        if(dp[ind][w] != -1) return dp[ind][w];
        int p = -1e9 , np = -1e9;
        np = f(ind+1 , w , wt , val , n , dp);
        if(w >= wt[ind]){
            p = val[ind] + f(ind+1, w-wt[ind] , wt , val , n , dp);
        }
        
        return dp[ind][w] = max(p , np);
    }
    
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n ,vector<int>(w+1 , -1) );
       return f(0 , w , wt , val , n , dp);
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
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends