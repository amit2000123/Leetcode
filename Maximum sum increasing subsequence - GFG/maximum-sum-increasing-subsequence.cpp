//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	
	int f(int ind , int prevind,int n, int v[], vector<vector<int>> &dp){
        if(ind == n) return 0; // array ke bahar chala gya ind increment hote hote
        int np , p =-1e9;
        if(dp[ind][prevind + 1] != -1) return dp[ind][prevind + 1];
        np = f(ind+1,prevind,n,v,dp);
        if(prevind == -1 || v[ind] > v[prevind]){
            p = v[ind] + f(ind+1,ind,n,v,dp);
        }
        return dp[ind][prevind + 1] = max(p,np); 
//// hum dp array mei -1 index access nhi kr skte isiye dp ke 2nd index ko +1 shift kr diya hai        
        
    }
	
	
	int maxSumIS(int v[], int n)  
	{  
        // vector<vector<int>> dp(n,vector<int>(n+1,-1));
        // return f(0,-1,n,nums,dp);
        
        // int n = v.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0)); // no. of rows n+1 isliye honge kyuki base ind == n pe exist krega and uske liye nth index exist krni chahiye and isliye n+1 hona chahiye no. of rows
    for(int ind = n-1;ind>=0;ind--){
        for(int prevind = ind-1;prevind>=-1;prevind--){
            int np , p = -1e9;
            np = dp[ind+1][prevind+1];
            if(prevind == -1 || v[ind] > v[prevind]){
                p = v[ind] + dp[ind+1][ind+1];
            }
            dp[ind][prevind + 1] = max(np,p);
        }
    }
    return dp[0][0];
        
        
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends