//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool isPal(int i , int j , string str){
        while( i <= j){
            if(str[i] != str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    int f(int i , int n , string str , vector<int> &dp){
        if(i == n ) return 0;
        
        int mini = 1e9;
        if(dp[i] != -1) return dp[i];
        
        for(int j=i;j<n;j++){
            if( isPal(i , j , str) == true){
                int cost = 1 + f(j + 1 , n , str , dp);
                mini = min(mini , cost);
            }
        }
            
        return dp[i] = mini;
    }

    int palindromicPartition(string str)
    {
        int n = str.size();
        vector<int> dp(n, -1);
        return f(0 , n , str , dp) - 1;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends