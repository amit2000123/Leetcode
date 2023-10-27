//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
    int f(int ind1 , int ind2 , string s , string t , vector<vector<int>> &dp){
        if(ind1 == 0 || ind2 == 0) return 0;
        
        if( dp[ind1][ind2] != -1 ) return dp[ind1][ind2];
        
        if(s[ind1 - 1] == t[ind2 - 1]){
            return dp[ind1][ind2] = 1 + f(ind1 - 1 , ind2 - 1 , s, t ,dp);
        }
        
        return dp[ind1][ind2] = max(f(ind1-1,ind2 ,s,t,dp) , f(ind1 , ind2-1,s,t , dp));
    }
  
    int minimumNumberOfDeletions(string s) { 
        int n = s.size();
        string t = s;
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        reverse(t.begin() , t.end());
        
        
        for(int i=0;i<=n;i++) dp[i][0] = 0;
        for(int j=0;j<=n;j++) dp[0][j] = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        
        
        // int num = f(n , n , s , t ,dp);
        int num = dp[n][n];
        return n - num;
        
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends