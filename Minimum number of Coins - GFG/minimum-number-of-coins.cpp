//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    /////// DP
    int f(int ind , int sum , vector<int> &v ,vector<int>&ans){
        if(sum == 0) return 0;
        if(ind == 0){
            if(sum % v[0] == 0){
                ans.push_back(v[0]);
                return sum/v[0];
            } 
            else return 1e9;
            
        }
        int notpick =1e9;
        int pick = 1e9;
        if(v[ind] <= sum){
            ans.push_back(v[ind]);
            pick = 1 + f(ind,sum-v[ind],v,ans);
        }
        else{
            notpick = 0 + f(ind-1,sum,v,ans);
        }
        return min(pick,notpick);
    }
    
    vector<int> minPartition(int n)
    {
        vector<int>ans;
        // vector<int> v = {2000,500,200,100,50,20,10,5,2,1};  
        vector<int> v = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        int a= f(9,n,v,ans);
        return ans;
   
    }
    
    
    ////// GREEDY 
    
    
    // vector<int> minPartition(int n)
    // {
    //     vector<int>ans;
    //     // vector<int> v = {2000,500,200,100,50,20,10,5,2,1};  
    //     vector<int> v = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
    //     int i =9;
    //     while(i>=0  && n != 0){
    //         if(v[i] <= n){
    //             ans.push_back(v[i]);
    //             n -= v[i];
    //         }
    //         else{
    //             i--;
    //         }
    //     }
    //     return ans;
   
    // }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends