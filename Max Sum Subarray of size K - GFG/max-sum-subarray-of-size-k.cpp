//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        long sum = 0;
        long maxi = INT_MIN;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        maxi = max(maxi , sum);
        
        for(int i=k;i<n;i++){
            sum = sum + arr[i] - arr[i - k];
            maxi = max(maxi , sum);
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends